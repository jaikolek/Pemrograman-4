#include "Triangle.h"
#include <iostream>

int Triangle::get_base()
{
	return Base;
}

int Triangle::get_height()
{
	return Height;
}

void Triangle::set_base(int Base)
{
	this->Base = Base;
}

void Triangle::set_height(int Height)
{
	this->Height = Height;
}

void Triangle::draw()
{
	std::cout << "Base: " << Base << std::endl;
	std::cout << "Height: " << Height << std::endl;
}

void Triangle::set_attribute(std::string T, int attrib[])
{
	set_type(T);
	set_base(attrib[0]);
	set_height(attrib[1]);
	enable();
}

std::vector<int> Triangle::get_attribute()
{
	std::vector<int> output = { get_base(), get_height() };
	return output;
}