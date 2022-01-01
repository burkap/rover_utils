cmake_minimum_required(VERSION 3.0.2)
project(rover_utils)
find_package(catkin REQUIRED)

catkin_package(
 INCLUDE_DIRS include
)

include_directories(
    include
    ${catkin_INCLUDE_DIRS}
)

install(DIRECTORY include/
  DESTINATION ${CATKIN_PACKAGE_INCLUDE_DESTINATION}
)
