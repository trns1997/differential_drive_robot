# differential_drive_robot

## Getting Started
```
cd PATH_TO_CATKIN_WS/src
git clone https://github.com/trns1997/slam_nav.git
cd ..
catkin_make 
```
Make sure to source the catkin_ws. Check if the `slam_nav` package is properly setup by trying:
```
roscd differential_drive_robot/
```

### Installing TurtleBot3 Dependencies (if not already installed)
Replace `DISTRO` with your ros version, so if you are using melodic the `DISTRO=noetic`
```
cd ~/catkin_ws/src/
git clone -b DISTRO-devel https://github.com/ROBOTIS-GIT/turtlebot3_simulations.git
cd ~/catkin_ws && catkin_make
```

## Building the Custom Kinematic Simulator node
- Open the `waffle_kin_sim.slx` simulink file and build the model. Make sure an instance of `roscore` is running while you build and compile the model.
- This should create a `build_ros_model.sh` file in the `PATH_TO_CATKIN_WS//src/differential_drive_robot/matlab/waffle_kin_sim` folder.
```
cd PATH_TO_CATKIN_WS//src/differential_drive_robot/matlab/waffle_kin_sim
./build_ros_model.sh waffle_kin_sim.tgz ~/catkin_ws
catkin_make -C ~/catkin_ws/
```

## Building the Custom Kinematic Simulator test node
- Open the `waffle_kin_sim_test.slx` simulink file and build the model. Make sure an instance of `roscore` is running while you build and compile the model.
- This should create a `build_ros_model.sh` file in the `PATH_TO_CATKIN_WS//src/differential_drive_robot/matlab/waffle_kin_sim/test` folder.
```
cd PATH_TO_CATKIN_WS//src/differential_drive_robot/matlab/waffle_kin_sim/test
./build_ros_model.sh waffle_kin_sim_test.tgz ~/catkin_ws
catkin_make -C ~/catkin_ws/
```

## Building the Trajectory Tracking Controller node
- Open the `unicycle_kin_trajCont.slx` simulink file and build the model. Make sure an instance of `roscore` is running while you build and compile the model.
- This should create a `build_ros_model.sh` file in the `PATH_TO_CATKIN_WS//src/differential_drive_robot/matlab/waffle_ttc` folder.
```
cd PATH_TO_CATKIN_WS//src/differential_drive_robot/matlab/waffle_ttc
./build_ros_model.sh unicycle_kin_trajCont.tgz ~/catkin_ws
catkin_make -C ~/catkin_ws/
```

## Building the Trajectory Tracking Controller test node
- Open the `unicycle_kin_trajCont_test_1.slx` (square trajectory) simulink file and build the model. Make sure an instance of `roscore` is running while you build and compile the model.
- This should create a `build_ros_model.sh` file in the `PATH_TO_CATKIN_WS//src/differential_drive_robot/matlab/waffle_ttc/test` folder.
```
cd PATH_TO_CATKIN_WS//src/differential_drive_robot/matlab/waffle_ttc/test
./build_ros_model.sh unicycle_kin_trajCont_test_1.tgz ~/catkin_ws
catkin_make -C ~/catkin_ws/
```

## Running and Testing the Kinematic Simulator
```
roslaunch differential_drive_robot waffle_sim_test.launch
```
### Result
A Rviz window should open up and display the robot odom pose.

<img src= https://github.com/trns1997/differential_drive_robot/blob/main/media/kin_sim.gif/>

## Running SLAM and Building a MAP
To make things simple a launch file has been created to faciliated the mapping process
```
export TURTLEBOT3_MODEL=waffle
roslaunch differential_drive_robot waffle_gmapping.launch
```
### Result
A gazebo window will open with the `turtlebot3_house.world`, also a rviz window where the mapping can be visualized and the terminal is used to send teleop commands to drive the turtlebot.

<img src= https://github.com/trns1997/differential_drive_robot/blob/main/media/mapping.png/>

Once satisfied with the built map, run the map server service in a new terminal to save the map.
```
rosrun map_server map_saver -f ~/map
```

## Running RRT* on our built map
- Open matlab and run the `waffler_RRT_star.m` script
- The script ask for user input for start and end pose. Example:
```
Input Start Pose: [-4.3, 1.5, -pi]
Input End Pose: [5.8, -4.2, 0]
```
### Result
The algorithm determines the shortest path from the start to end point based on our desired parameters and iterations.

<img src= https://github.com/trns1997/differential_drive_robot/blob/main/media/rrt_star.png/>


## Team Members
* **Thomas Narayana Swamy** - 10709057
* **Felippe Francesconi** - 10527268
