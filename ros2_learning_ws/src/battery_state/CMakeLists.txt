cmake_minimum_required(VERSION 3.8)
project(battery_state)

if(CMAKE_COMPILER_IS_GNUCXX OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
  add_compile_options(-Wall -Wextra -Wpedantic)
endif()

# find dependencies
find_package(ament_cmake REQUIRED)
find_package(ament_cmake_python REQUIRED)
find_package(rosidl_default_generators REQUIRED)
find_package(rclcpp REQUIRED)
find_package(rclpy REQUIRED)
find_package(std_msgs REQUIRED)


#build custom srv and msg
rosidl_generate_interfaces(${PROJECT_NAME}
  #msg &srv files msg/file.msg  
  "srv/BatterySrv.srv"
  "msg/BatteryMsg.msg"
  DEPENDENCIES std_msgs
)

ament_export_dependencies(rosidl_default_runtime)

#building Cpp nodes 
add_executable(batteryClient src/battaryClient.cpp)
ament_target_dependencies(batteryClient rclcpp)


install(TARGETS
  #files
  batteryClient
  DESTINATION lib/${PROJECT_NAME}
)

rosidl_get_typesupport_target(cpp_typesupport_target ${PROJECT_NAME} rosidl_typesupport_cpp)
target_link_libraries(batteryClient ${cpp_typesupport_target})

#building python nodes 
# ament_python_install_package(${PROJECT_NAME})
# ament_python_install_package(${PROJECT_NAME}_py) #commented because i don't use modules here

install(PROGRAMS
  #files
  scripts/batteryServer.py
  DESTINATION lib/${PROJECT_NAME}
)

#launch files 
install(
  DIRECTORY launch
  DESTINATION share/${PROJECT_NAME}
)
ament_package()
