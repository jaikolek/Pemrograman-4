#pragma once
#include "Object.h"

class Rectangle : public Object
{
protected:
	int Width;
	int Length;

public:
	int get_width();
	int get_length();
	void set_width(int);
	void set_length(int);

	// override
	void draw();
	void set_attribute(std::string T, int attrib[]);
	std::vector<int> get_attribute();
};