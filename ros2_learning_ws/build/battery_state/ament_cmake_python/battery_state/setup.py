from setuptools import find_packages
from setuptools import setup

setup(
    name='battery_state',
    version='0.0.0',
    packages=find_packages(
        include=('battery_state', 'battery_state.*')),
)
