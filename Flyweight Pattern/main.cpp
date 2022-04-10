#include "GameManager.h"

int main()
{
	GameManager Game;

	Game.generate_object();
	Game.display_object();
	Game.print_vector_size();

	return 0;
}