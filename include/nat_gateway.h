#ifndef NAT_GATEWAY_HPP_INCLUDED
#define NAT_GATEWAY_HPP_INCLUDED

#include <string>
#include <unordered_map>

namespace nat {

	class NATGateway {
	public:
		NATGateway();
		void        registerService(const std::string &serviceName, const std::string &serviceAddress);
		std::string getServiceAddress(const std::string &serviceName) const;

	private:
		std::unordered_map<std::string, std::string> serviceMap;
	};

	// 添加 clientRequest 函数的声明
	void clientRequest(const NATGateway &gateway, const std::string &serviceName);

} // namespace nat


#endif // NAT_GATEWAY_HPP_INCLUDED
