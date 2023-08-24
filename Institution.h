#pragma once
#include <iostream>
#include <string>

class Institution
{
	std::string _name;
	std::string _region;
	std::string _country;

public:
	Institution(std::string name, std::string region, std::string country);

	std::string GetName() { return _name; }
	std::string GetRegion() { return _region; }
	std::string GetCountry() { return _country; }
};
