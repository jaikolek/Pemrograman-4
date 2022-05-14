#include "ObjectFactory.h"
#include <iostream>

Object* ObjectFactory::get_object(std::string type, int attrib[])
{
	Object* output;
	if (Objs.count(type) != 0)
	{
		output = Objs.at(type);
		if (output->get_status() == "enable")
		{
			output->set_attribute(type, attrib);
			std::cout << "Updating the " << type << std::endl;
			output->draw();
			return output;
		}
	}
	else
	{
		std::cout << "Create a new " << type << std::endl;
		if (type == "Rectangle")
		{
			output = new Rectangle;
			output->set_attribute(type, attrib);
			output->draw();
			Objs.insert(std::pair<std::string, Object*>(type, output));
			return output;
		}
		else if (type == "Triangle")
		{
			output = new Triangle;
			output->set_attribute(type, attrib);
			output->draw();
			Objs.insert(std::pair<std::string, Object*>(type, output));
			return output;
		}
		else if (type == "Circle")
		{
			output = new Circle;
			output->set_attribute(type, attrib);
			output->draw();
			Objs.insert(std::pair<std::string, Object*>(type, output));
			return output;
		}
	}
}