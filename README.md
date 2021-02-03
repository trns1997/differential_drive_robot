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

## Launching

## Team Members
* **Thomas Narayana Swamy** - 10709057
* **Felippe Francesconi** - 10527268
