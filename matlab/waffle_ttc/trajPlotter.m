clear all
close all
 %%
filesStructure = dir('bags/*.bag');
allFileNames = {filesStructure(:).name};
for i = 1:length(allFileNames)
    path = strcat("bags/", allFileNames{i});
    bag = rosbag(path);

    bSelDesired = select(bag,'Topic','/desired_position');

    msgStructsDesired = readMessages(bSelDesired,'DataFormat','struct');
    msgStructsDesired{1};

    xPointsDesired = cellfun(@(m) double(m.X),msgStructsDesired);
    yPointsDesired = cellfun(@(m) double(m.Y),msgStructsDesired);
    plot(xPointsDesired,yPointsDesired)

    hold on

    bSelActual = select(bag,'Topic','/actual_position');

    msgStructsActual = readMessages(bSelActual,'DataFormat','struct');
    msgStructsActual{1};

    xPointsActual = cellfun(@(m) double(m.X),msgStructsActual);
    yPointsActual = cellfun(@(m) double(m.Y),msgStructsActual);
    plot(xPointsActual,yPointsActual)
end
% legend('desired','actual(e = 0.1)', 'desired','actual(e = 5)')
axis equal