from setuptools import find_packages, setup

package_name = 'turtlesim_manipulation'

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
    maintainer='NEWIR',
    maintainer_email='mohamed.mohamed0123@eng-st.cu.edu.eg',
    description='package responsible to manipulate with turtlesim',
    license='BSD',
    tests_require=['pytest'],
    entry_points={
        'console_scripts': [
            'draw_circle = turtlesim_manipulation.draw_circle:main',
            'traveler_turtle = turtlesim_manipulation.traveler_turtle:main',
        ],
    },
)
