#include "./task_node.hpp"

namespace fleetmanager {

	task_node::task_node(const std::string &namespace) : Node(namespace + "/task") {
		m_publisher = create_publiser<std_msgs::msgs::ByteMultiArray>(namespace + "/task", 10);
	}

	task_node::~task_node() {
		
	}

	task_node::void send_task(const move_to_task &task) {
		
	}

}
