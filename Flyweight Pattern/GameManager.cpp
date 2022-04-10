#include "GameManager.h"

void GameManager::generate_object()
{
	std::string type;
	double size_length, size_width, coordinate_x, coordinate_y;

	srand(time(0));

	for (int i = 0; i < 10; i++)
	{
		int random = rand() % 3;
		type = Any_Type[random];
		size_length = rand() % 100;
		size_width = rand() % 100;
		coordinate_x = rand() % 200;
		coordinate_y = rand() % 200;
		obj[i] = *Object_Factory.get_object(type, size_length, size_width, coordinate_x, coordinate_y);
	}
}

void GameManager::display_object()
{
	for (int i = 0; i < 10; i++)
	{
		obj[i].draw_object();
	}
}

void GameManager::print_vector_size()
{
	std::cout << "Vector Size: " << Object_Factory.Save_Object.size() << std::endl;
	std::cout << "Vector Object: ";
	for (auto i = Object_Factory.Save_Object.begin(); i != Object_Factory.Save_Object.end(); ++i)
	{
		std::cout << i->get_type() << ", ";
	}
	std::cout << std::endl;
}