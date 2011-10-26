#include	<iostream>
#include	"Core.h"
#include	"Board.h"

Core::Core()
  : x(4),
    y(8),
    score(0),
    time(30.0)
{
}

Core::~Core()
{
}

bool			Core::hasLost(const std::vector<std::vector< int> > & map)
{
  return (map[this->x][this->y] == 1);
}

void			Core::moveFrog(const int key, const std::vector<std::vector< int> > & map)
{

}


void			Core::launch()
{
  Board*	game = new Board();
  int		key = 0;
  Graphic*	graph = new Graphic();

  game->initMap();
  while (hasLost(game->getMap()) && key != -1)
    {
      graph->displayScreen(game->getMap());
      key = graph->getKey();
      moveFrog(key, game->getMap());
    }
  if (key == -1)
    std::cout << "You left the game! Coward!" << std::endl;
  else
    std::cout << "You lost the game!" << std::endl;
  std::cout << "Your score = " << this->score << std::endl;

}
