/*
*	Author      : Stefan Möstel, Torsten Amshove
*	Copyright   : This Code is licensed under GPL v3
*	Description : WaterBunny data analysis tool Config class in C++, Ansi-style
*/

#include <ConfigFile.h>
#include <config.h>

Config::Config() {
	// reading config data into class
	readConfig();
}

void Config::readConfig() {

	// open the config file
	ConfigFile config(CONFIG_FILE);

	// reading config parameter
	// database
	config.readInto(dbName, "dbName");
	config.readInto(dbPasswd, "dbPasswd");
	config.readInto(dbHost, "dbHost");
	config.readInto(dbPort, "dbPort");
}



