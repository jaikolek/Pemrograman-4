#pragma once
#include "ObjectFactory.h"

class GameManager
{
protected:
	std::string Any_Type[3] = {"Circle", "Rectangle", "Triangle"};
	ObjectFactory Object_Factory;
	RegulerObject obj[10];

public:
	GameManager();
	void generate_object();
	void display_object();
	void print_vector_size();
};

