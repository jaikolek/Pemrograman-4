#include "Rectangle.h"
#include <iostream>

int Rectangle::get_width()
{
	return Width;
}

int Rectangle::get_length()
{
	return Length;
}

void Rectangle::set_width(int Width)
{
	this->Width = Width;
}

void Rectangle::set_length(int Length)
{
	this->Length = Length;
}

void Rectangle::draw()
{
	std::cout << "Width: " << Width << std::endl;
	std::cout << "Length: " << Length << std::endl;
}

void Rectangle::set_attribute(std::string T, int attrib[])
{
	set_type(T);
	set_width(attrib[0]);
	set_length(attrib[1]);
	enable();
}

std::vector<int> Rectangle::get_attribute()
{
	std::vector<int> output = { get_width(), get_length() };
	return output;
}