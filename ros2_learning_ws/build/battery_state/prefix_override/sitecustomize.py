import sys
if sys.prefix == '/usr':
    sys.real_prefix = sys.prefix
    sys.prefix = sys.exec_prefix = '/home/newir529/ROS2_JAZZY_TUTORIAL/ros2_learning_ws/install/battery_state'
