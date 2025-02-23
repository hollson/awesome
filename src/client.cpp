#include "nat_gateway.h"

#include <iostream>

namespace nat {

	void clientRequest(const NATGateway &gateway, const std::string &serviceName) {
		std::string serviceAddress = gateway.getServiceAddress(serviceName);
		if (!serviceAddress.empty()) {
			std::cout << "Accessing service " << serviceName << " at address: " << serviceAddress << std::endl;
			// 这里可以添加实际的网络访问代码
		} else {
			std::cout << "Service " << serviceName << " not found." << std::endl;
		}
	}

} // namespace nat
