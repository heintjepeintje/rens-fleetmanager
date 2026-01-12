from setuptools import find_packages
from setuptools import setup

setup(
    name='fleetmanager_interfaces',
    version='0.0.0',
    packages=find_packages(
        include=('fleetmanager_interfaces', 'fleetmanager_interfaces.*')),
)
