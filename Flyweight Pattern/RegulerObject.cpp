#include "RegulerObject.h"

RegulerObject::RegulerObject(std::string type, double size_length, double size_width, double coordinate_x, double coordinate_y)
{
	Status = true;
	Type = type;
	Size[0] = size_length;
	Size[1] = size_width;
	Coordinate[0] = coordinate_x;
	Coordinate[1] = coordinate_y;
}

void RegulerObject::set_object_value(std::string type, double size_length, double size_width, double coordinate_x, double coordinate_y)
{
	Type = type;
	Size[0] = size_length;
	Size[1] = size_width;
	Coordinate[0] = coordinate_x;
	Coordinate[1] = coordinate_y;
}

void RegulerObject::set_coordinate(double coordinate_x, double coordinate_y)
{
	Coordinate[0] = coordinate_x;
	Coordinate[1] = coordinate_y;
}

double RegulerObject::get_x_coordinate()
{
	return Coordinate[0];
}

double RegulerObject::get_y_coordinate()
{
	return Coordinate[1];
}

void RegulerObject::enabling_object()
{
	Status = true;
}

void RegulerObject::disabling_object()
{
	Status = false;
}

bool RegulerObject::get_object_status()
{
	return Status;
}

void RegulerObject::set_size(double size_length, double size_width)
{
	Size[0] = size_length;
	Size[1] = size_width;
}
double RegulerObject::get_size_length()
{
	return Size[0];
}

double RegulerObject::get_size_width()
{
	return Size[1];
}

std::string RegulerObject::get_type()
{
	return Type;
}

void RegulerObject::draw_object()
{
	std::cout << Type << " used in coordinate " << Coordinate[0] << ", " << Coordinate[1] << " with size " << Size[0] << ", " << Size[1] << " . Status ";
	if (Status == true)
	{
		std::cout << "enable";
	}
	else
	{
		std::cout << "disable";
	}

	std::cout << std::endl;
}