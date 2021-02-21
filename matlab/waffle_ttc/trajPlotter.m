clear all
close all
 %%
filesStructure = dir('bags/square/*.bag');
allFileNames = {filesStructure(:).name};
for i = 1:length(allFileNames)
    path = strcat("bags/square/", allFileNames{i});
    bag = rosbag(path);

    bSelDesired = select(bag,'Topic','/desired_position');

    msgStructsDesired = readMessages(bSelDesired,'DataFormat','struct');
    msgStructsDesired{1};

    xPointsDesired = cellfun(@(m) double(m.X),msgStructsDesired);
    yPointsDesired = cellfun(@(m) double(m.Y),msgStructsDesired);
    pDesired(i) = plot(xPointsDesired,yPointsDesired);

    hold on

    bSelActual = select(bag,'Topic','/actual_position');

    msgStructsActual = readMessages(bSelActual,'DataFormat','struct');
    msgStructsActual{1};

    xPointsActual = cellfun(@(m) double(m.X),msgStructsActual);
    yPointsActual = cellfun(@(m) double(m.Y),msgStructsActual);
    pActual(i) = plot(xPointsActual,yPointsActual);
end
legend([pDesired(4) pActual(1) pActual(2) pActual(3) pActual(4)], 'desired', 'actual(e = 0.1)', 'actual(e = 2.5)', 'actual(e = 5)', 'actual(e = 0.01)')
axis equal