/*
*	Author      : Stefan Möstel, Torsten Amshove
*	Copyright   : This Code is licensed under GPL v3
*	Description : WaterBunny data analysis tool in C++, Ansi-style
*/

#include <analysis.h>

int main() {
	std::string logConfFile = "../conf/log4cpp.conf"; //path to log4cpp config file
	std::string iniConfFile = "../conf/analysis.ini"; //path to application config

	/*
	 * Create log4cpp logger
	 * 	Usage:	logger.<LogLevel>(<messageString>);
	 */
	log4cpp::PropertyConfigurator::configure(logConfFile);
	log4cpp::Category& logger = log4cpp::Category::getRoot();

	// Creating Config instance
	Config config = new Config();



	logger << log4cpp::Priority::DEBUG << "Reading paramerter dbName: " << config.getDbName;

	logger.info("Hi Ho :-)");


	log4cpp::Category::shutdown();
	return 0;
}
