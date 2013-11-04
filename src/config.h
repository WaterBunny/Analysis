/*
*	Author      : Stefan Möstel, Torsten Amshove
*	Copyright   : This Code is licensed under GPL v3
*	Description : WaterBunny data analysis tool Config class in C++, Ansi-style
*/

#include <ConfigFile.h>
#include <string>

#ifndef CONFIG_H_
#define CONFIG_H_

/*
 * Class Config
 * 	Instances of this class read the config file and hold conifg parameters.
 * 	Conifg parameter can be read via getter Functions.
 */
//class Config;

class Config {
private:
	std::string dbName;
	std::string dbPasswd;
	std::string dbHost;
	int	dbPort;
	void readConfig();
public:
	// Config constructor loads config data
	Config();

	std::string getDbHost() const {
		return this->dbHost;
	}

	std::string getDbName() const {
		return this->dbName;
	}

	std::string getDbPasswd() const {
		return this->dbPasswd;
	}

	int getDbPort() const {
		return this->dbPort;
	}
};

Config::Config() {
	// reading config data into class
	readConfig();
}

void Config::readConfig() {

	// open the config file
	ConfigFile config(CONFIG_FILE,"=","#");

	// reading config parameter
	// database
	config.readInto(dbName, "dbName");
	config.readInto(dbPasswd, "dbPasswd");
	config.readInto(dbHost, "dbHost");
	config.readInto(dbPort, "dbPort");
}

#endif /* CONFIG_H_ */
