#include <iostream>
#include <memory>
#include "status.h"
#include "spdlog/spdlog.h"

void sign::print() 
{
	using namespace std;
	cout << "Printing all documents in the queue..." << endl;	
}

void sign::display()
{
	using namespace std;
	cout << "Login successful for the rest of the cloud servers" << endl;
	std::shared_ptr<spdlog::logger> core_logger;
	std::cout << "Size of logger: " << sizeof(core_logger) << endl;
	sign::transact();
	line_edit();
}
