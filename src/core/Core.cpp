#include	<iostream>
#include	"Core.h"
#include	"Board.h"
#include	"Graphic.h"

Core::Core(const int & largeur, const int & hauteur, char* const & lib)
  : x(4), y(8), score(0), time(30.0)
{
}

Core::~Core()
{
}

bool			Core::has_lost(const Board & board)
{
  return (board[this->x][this->y] == 0)
}

void			Core::moveFrog(const int & key, Board* game)
{

}


int			Corey::launch()
{
  Board		game();
  int		key = 0;
  Graphic*	graph;
  float		endwait;

  graph = new Graphic();
  while (has_lost(game) != 1 && key != -1)
    {
      graph->displayScreen(game.getMap());
      key = graph->getKey();
      moveFrog(key, &game);
    }
  if (key == -1)
    std::cout << "You left the game! Coward!" << std::endl;
  else
    std::cout << "You lost the game!" << std::endl;
  std::cout << "Your score = " << score.getScore() << "\nLevel = " << score.getLevel() << std::endl;
  return (0);
}
