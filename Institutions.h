#pragma once
#include <iostream>
#include <string>

class Institutions
{
	std::string _name;
	std::string _region;
	std::string _country;

public:
	Institutions(std::string name, std::string region, std::string country);

	std::string getName() { return _name; }
	std::string getRegion() { return _region; }
	std::string getCountry() { return _country; }
};
