echo Removing old build files...
rm -rf install
rm -rf build
rm -rf log

echo Rebuilding interfaces...
colcon build --packages-select fleetmanager_interfaces
source install/local_setup.sh

echo Rebuilding fleetmanager...
colcon build --packages-select fleetmanager
source install/local_setup.sh

echo Done.
