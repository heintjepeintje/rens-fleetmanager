echo Building fleetmanager interfaces...
colcon build --packages-select fleetmanager_interfaces
source ./install/local_setup.sh

echo Building fleetmanager server...
colcon build --packages-select fleetmanager_server
source ./install/local_setup.sh

echo Building fleetmanager client...
colcon build --packages-select fleetmanager_client
source ./install/local_setup.sh

echo Done.
