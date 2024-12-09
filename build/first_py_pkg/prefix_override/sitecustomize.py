import sys
if sys.prefix == '/usr':
    sys.real_prefix = sys.prefix
    sys.prefix = sys.exec_prefix = '/home/newir529/ROS2_JAZZY_TUTORIAL/install/first_py_pkg'
