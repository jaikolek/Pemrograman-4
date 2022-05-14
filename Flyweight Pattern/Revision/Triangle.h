#pragma once
#include "Object.h"

class Triangle : public Object
{
protected:
	int Base;
	int Height;

public:
	int get_base();
	int get_height();
	void set_base(int);
	void set_height(int);

	// override
	void draw();
	void set_attribute(std::string T, int attrib[]);
	std::vector<int> get_attribute();
};