cmake_minimum_required(VERSION 3.0.2)
project(neslihan_msgs)

## Compile as C++11, supported in ROS Kinetic and newer
add_compile_options(-std=c++11)

## Find catkin macros and libraries
## if COMPONENTS list like find_package(catkin REQUIRED COMPONENTS xyz)
## is used, also find other catkin packages
find_package(catkin REQUIRED message_generation std_msgs geometry_msgs)


add_message_files(
    DIRECTORY msg
    FILES
    Velocities.msg
    PID.msg
    Imu.msg
)

## Generate services in the 'srv' folder
# add_service_files(
#   FILES
#   Service1.srv
#   Service2.srv
# )

## Generate actions in the 'action' folder
# add_action_files(
#   FILES
#   Action1.action
#   Action2.action
# )

generate_messages(
   DEPENDENCIES
   std_msgs  geometry_msgs
)


catkin_package(CATKIN_DEPENDS
    message_runtime
    std_msgs
    geometry_msgs
)

