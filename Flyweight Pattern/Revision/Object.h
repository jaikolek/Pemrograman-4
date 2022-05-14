#pragma once
#include <vector>
#include <string>

class Object
{
protected:
	std::string Type;
	std::string Status;

public:
	// virtual function
	virtual void draw() = 0;
	virtual void set_attribute(std::string T, int attrib[]) = 0;
	virtual std::vector<int> get_attribute() = 0;

	void set_type(std::string);
	void enable();
	void disable();
	
	std::string get_type();
	std::string get_status();
};

