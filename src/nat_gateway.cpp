#include "nat_gateway.h"
#include <string>

namespace nat {

	NATGateway::NATGateway() {}

	void NATGateway::registerService(const std::string &serviceName, const std::string &serviceAddress) { serviceMap[serviceName] = serviceAddress; }

	std::string NATGateway::getServiceAddress(const std::string &serviceName) const {
		auto it = serviceMap.find(serviceName);
		if (it != serviceMap.end()) {
			return it->second;
		}
		return "";
	}

} // namespace nat
