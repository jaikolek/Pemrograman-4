#include "Object.h"

void Object::set_type(std::string Type)
{
	this->Type = Type;
}

void Object::enable()
{
	Status = "enable";
}

void Object::disable()
{
	Status = "disable";
}

std::string Object::get_type()
{
	return Type;
}

std::string Object::get_status()
{
	return Status;
}