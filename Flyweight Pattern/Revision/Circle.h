#pragma once
#include "Object.h"

class Circle : public Object
{
protected:
	int Radius;

public:
	int get_radius();
	void set_radius(int);

	// override
	void draw();
	void set_attribute(std::string T, int attrib[]);
	std::vector<int> get_attribute();
};

