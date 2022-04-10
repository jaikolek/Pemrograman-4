#pragma once
#include "Object.h"

class RegulerObject : public Object
{
public:
	RegulerObject(std::string, double, double, double, double);
	// override
	void set_object_value(std::string, double, double, double, double);
	void set_coordinate(double, double);
	double get_x_coordinate();
	double get_y_coordinate();
	void enabling_object();
	void disabling_object();
	bool get_object_status();
	void set_size(double, double);
	double get_size_length();
	double get_size_width();
	std::string get_type();
	void draw_object();
};

