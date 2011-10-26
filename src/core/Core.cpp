#include	<iostream>
#include	"Core.h"
#include	"Board.h"

Core::Core()
  : x(8),
    y(4),
    score(0),
    time(30.0),
    theCase(2)
{
}

Core::~Core()
{
}

bool			Core::hasLost(const std::vector<std::vector< int> > & map)
{
  if (theCase == WATER || theCase == CAR || theCase == TRUCKFACE ||
      theCase == TRUCKBACK || theCase == TRAINFACE || theCase == TRAINMID ||
      theCase == TRAINBACK)
    return false;
  return (true);
}

void			Core::moveFrog(const int key, Board * game)
{
  std::cout << " x : " << x << " - y : " << y <<" - key : " << key << " - theCase : " << theCase <<std::endl;
  if (key == LEFT && y > 0)
    {
      game->setCase(theCase, this->x, this->y);
      --this->y;
      theCase = game->getCase(this->x, this->y);
      game->setCase(FROG, this->x, this->y);
      
    }
  else if (key == RIGHT && y < 8)
    {
      game->setCase(theCase, this->x, this->y);
      ++this->y;
      theCase = game->getCase(this->x, this->y);
      game->setCase(FROG, this->x, this->y);
    }
  else if (key == UP && x > 0)
    {
      game->setCase(theCase, this->x, this->y);
      --this->x;
      theCase = game->getCase(this->x, this->y);
      game->setCase(FROG, this->x, this->y);
    }
  else if (key == DOWN && x < 8)
    {
      game->setCase(theCase, this->x, this->y);
      ++this->x;
      theCase = game->getCase(this->x, this->y);
      game->setCase(FROG, this->x, this->y);
    }
}


void			Core::launch()
{
  Board*	game = new Board();
  int		key = 0;
  Graphic*	graph = new Graphic();
  float timer1 = 0;
  float timer2 = 0;

  game->initMap();
  while (hasLost(game->getMap()) && key != END)
    {
      graph->displayScreen(game);
      key = graph->getKey(&timer1, &timer2);
      std::cout << key << std::endl;
      moveFrog(key, game);
    }
  if (key == -1)
    std::cout << "You left the game! Coward!" << std::endl;
  else
    std::cout << "You lost the game!" << std::endl;
  std::cout << "Your score = " << this->score << std::endl;

}
