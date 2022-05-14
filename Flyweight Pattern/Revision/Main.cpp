#include "ObjectFactory.h"
#include <map>
#include <iostream>

int main()
{
	int a[2] = { 11, 11 };
	int b[2] = { 15, 15 };
	int c[1] = { 14 };
	int d[1] = { 7 };

	ObjectFactory Test;

	Test.get_object("Rectangle", a);
	std::cout << std::endl;
	Test.get_object("Rectangle", b);
	std::cout << std::endl;
	Test.get_object("Triangle", a);
	std::cout << std::endl;
	Test.get_object("Triangle", b);
	std::cout << std::endl;
	Test.get_object("Rectangle", a);
	std::cout << std::endl;
	Test.get_object("Circle", c);
	std::cout << std::endl;
	Test.get_object("Circle", d);

	return 0;
}