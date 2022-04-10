#pragma once
#include <vector>
#include "Object.h"
#include "RegulerObject.h"

class ObjectFactory
{
public:
	std::vector<Object> Save_Object;
	Object* get_object(std::string, double, double, double, double);
	Object* create_object(std::string, double, double, double, double);
};

