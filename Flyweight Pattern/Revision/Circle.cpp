#include "Circle.h"
#include <iostream>

int Circle::get_radius()
{
	return Radius;
}

void Circle::set_radius(int Radius)
{
	this->Radius = Radius;
}

void Circle::draw()
{
	std::cout << "Radius: " << Radius << std::endl;
}

void Circle::set_attribute(std::string T, int attrib[])
{
	set_type(T);
	set_radius(attrib[0]);
	enable();
}

std::vector<int> Circle::get_attribute()
{
	std::vector<int> output = { get_radius() };
	return output;
}