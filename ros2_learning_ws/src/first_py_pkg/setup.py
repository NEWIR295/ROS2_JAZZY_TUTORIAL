from setuptools import find_packages, setup

package_name = 'first_py_pkg'

setup(
    name=package_name,
    version='0.0.0',
    packages=find_packages(exclude=['test']),
    data_files=[
        ('share/ament_index/resource_index/packages',
            ['resource/' + package_name]),
        ('share/' + package_name, ['package.xml']),
    ],
    install_requires=['setuptools'],
    zip_safe=True,
    maintainer='Newir',
    maintainer_email='mohamed.mohamed0123@eng-st.cu.edu.eg',
    description='ROS2 Learning Phase',
    license='BSD',
    tests_require=['pytest'],
    entry_points={
        'console_scripts': [
            "pub_node = first_py_pkg.ros2_simple_pub:main",
            "sub_node = first_py_pkg.ros2_simple_sub:main",

        ],
    },
)
