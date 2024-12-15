from setuptools import find_packages, setup

package_name = 'battery_state'

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
    description='Package used to obtain Battery percentage and sent warning to rhe user',
    license='BSD-2-Clause',
    tests_require=['pytest'],
    entry_points={
        'console_scripts': [
        ],
    },
)
