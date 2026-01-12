echo Building fleetmanager interfaces...
colcon build --packages-select fleetmanager_interfaces
source ./install/local_setup.sh

echo Building fleetmanager...
colcon build --packages-select fleetmanager
source ./install/local_setup.sh
