#pragma once
#include <iostream>

class Object
{
protected:
	std::string Type;
	double Size[2];
	double Coordinate[2];
	bool Status;

public:
	virtual void set_object_value(std::string, double, double, double, double) = 0;
	virtual void set_coordinate(double, double) = 0;
	virtual double get_x_coordinate() = 0;
	virtual double get_y_coordinate() = 0;
	virtual void enabling_object() = 0;
	virtual void disabling_object() = 0;
	virtual bool get_object_status() = 0;
	virtual void set_size(double, double) = 0;
	virtual double get_size_length() = 0;
	virtual double get_size_width() = 0;
	virtual std::string get_type() = 0;
	virtual void draw_object() = 0;
};

