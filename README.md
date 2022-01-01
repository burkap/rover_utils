# Rover Utils

A header only library created for use on the rover.

This library currently has no dependencies on ROS. Therefore, it can be used as a catkin package or as an external library. 

## Using as a catkin pkg

Simply open the CMakeLists.txt file in the package you want to use this library in and add the rover_utils in the find_package() function.

For example in "my_package/CMakeLists.txt"
```python
find_package(catkin REQUIRED COMPONENTS
  roscpp
  rospy
  rover_utils # Add this line
)
```

And use include the libraries as follows:
For example in "my_package/src/my_cpp.cpp"
```cpp
#include <rover_utils/math_helpers.h>
```
