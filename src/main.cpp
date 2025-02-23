#include <iostream>
#include "nat_gateway.h"

using namespace nat;

int main() {
	NATGateway gateway;

	// 注册服务
	gateway.registerService("ServiceA", "192.168.1.100:8080");
	gateway.registerService("ServiceB", "192.168.1.101:9090");

	// 客户端请求服务
	clientRequest(gateway, "ServiceA");
	clientRequest(gateway, "ServiceC");

	return 0;
}
