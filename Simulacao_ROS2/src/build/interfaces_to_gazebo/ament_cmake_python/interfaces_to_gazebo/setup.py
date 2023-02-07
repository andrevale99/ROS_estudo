from setuptools import find_packages
from setuptools import setup

setup(
    name='interfaces_to_gazebo',
    version='0.0.0',
    packages=find_packages(
        include=('interfaces_to_gazebo', 'interfaces_to_gazebo.*')),
)
