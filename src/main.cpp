#include <iostream>

#include "cxxopts.hpp"

int main(const int argc, char *argv[]) {
	cxxopts::Options options(argv[0], "An awesome example program\n");

	options.add_options()("h,help", "Show help")("v,verbose", "Enable verbose output")("o,output", "Set output file", cxxopts::value<std::string>())("n,number", "Number of items", cxxopts::value<int>());

	const auto result = options.parse(argc, argv);

	// 如果没有传递任何参数，显示帮助信息并退出
	if (argc == 1) {
		std::cout << options.help() << std::endl;
		return 0;
	}

	if (result.count("help")) {
		std::cout << options.help() << std::endl;
		return 0;
	}

	if (result.count("verbose")) {
		std::cout << "Verbose mode enabled." << std::endl;
	}

	if (result.count("output")) {
		std::cout << "Output file: " << result["output"].as<std::string>() << std::endl;
	}

	if (result.count("number")) {
		std::cout << "Number: " << result["number"].as<int>() << std::endl;
	}
	return 0;
}
