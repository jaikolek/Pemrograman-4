#include "ObjectFactory.h"

Object* ObjectFactory::get_object(std::string type, double size_length, double size_width, double coordinate_x, double coordinate_y)
{
	Object* Return_Object = new RegulerObject("0", 0, 0, 0, 0);

	for (int i = 0; i < Save_Object.size(); i++)
	{
		if (Save_Object[i].get_type() != type)
		{
			Return_Object = create_object(type, size_length, size_width, coordinate_x, coordinate_y);
			Return_Object->enabling_object();
			Save_Object.push_back(*Return_Object);
		}
		else
		{
			*Return_Object = Save_Object[i];
			Return_Object->set_object_value(type, size_length, size_width, coordinate_x, coordinate_y);
			Return_Object->enabling_object();
		}
	}

	return Return_Object;
}

Object* ObjectFactory::create_object(std::string type, double size_length, double size_width, double coordinate_x, double coordinate_y)
{
	if (type == "Rectangle")
	{
		return new RegulerObject(type, size_length, size_width, coordinate_x, coordinate_y);
	}
	else if (type == "Triangle")
	{
		return new RegulerObject(type, size_length, size_width, coordinate_x, coordinate_y);
	}
	else if (type == "Circle")
	{
		return new RegulerObject(type, size_length, size_width, coordinate_x, coordinate_y);
	}
	else
	{
		std::cout << "ERROR::DECLARATION ERROR::WRONG NAME" << std::endl;
	}
}