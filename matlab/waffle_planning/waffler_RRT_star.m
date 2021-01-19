clear all
close all

%% Load the map and create an occupancy grid
% Load the image
image = imread('maps/turtlebot3_house.pgm');

% Transform the image to a binary map
imageNorm = double(image)/255;
imageOccupancy = 1 - imageNorm;

% Create the occupancy map object
occGrid = occupancyMap(imageOccupancy,1/0.05);

% Set the parameters according to the yaml file
occGrid.LocalOriginInWorld = [-10,-10];
occGrid.OccupiedThreshold = 0.65;
occGrid.FreeThreshold = 0.196;

% Show the map
show(occGrid)

%% Plan the path
map = copy(occGrid);
inflate(map,0.22);

bounds = [map.XWorldLimits;...
    map.YWorldLimits; [-pi pi]]; % Bounds on configuration variables
space = stateSpaceSE2(bounds);

stateValidator = validatorOccupancyMap(space); 
stateValidator.Map = map;
stateValidator.ValidationDistance = 0.05; % Distance for path discretization

planner = plannerRRTStar(space, stateValidator);
planner.BallRadiusConstant = 100;
planner.ContinueAfterGoalReached = true;
planner.MaxIterations = 90000;
planner.MaxNumTreeNodes = 45000;
planner.MaxConnectionDistance = 0.1;
planner.GoalReachedFcn = @isGoalReached;

start = input('Input Start Pose: ');%[-4.3, 1.5, -pi];
goal = input('Input End Pose: ');%[5.8, -4.2, 0];
[pthObj, solnInfo] = plan(planner, start, goal);

%% Plot the planned path
show(occGrid),hold on
plot(solnInfo.TreeData(:,1), solnInfo.TreeData(:,2), '.-')

interpolate(pthObj,300);
plot(pthObj.States(:,1), pthObj.States(:,2), 'r-', 'LineWidth', 2),hold off

%% Functions
function isReached = isGoalReached(planner, goalState, newState)
    isReached = false;
    threshold = 0.1;
    if planner.StateSpace.distance(newState, goalState) < threshold
        isReached = true;
    end
end