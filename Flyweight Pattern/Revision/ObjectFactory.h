#pragma once
#include "Object.h"
#include "Circle.h"
#include "ObjectFactory.h"
#include "Rectangle.h"
#include "Triangle.h"
#include <map>

class ObjectFactory
{
protected:
	std::map<std::string, Object*> Objs;

public:
	Object* get_object(std::string type, int attrib[]);
};

