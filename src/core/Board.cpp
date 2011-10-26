#include	<iostream>
#include	"Board.h"
#include	"Enums.h"

Board::Board()
{
  std::vector<int>	tmp;

  for (int j = 0; j <= 8; ++j)
    {
      tmp.push_back(0);
    }
  for(int i = 0; i <= 8; ++i)
    {
      this->map.push_back(tmp);
    }
}

Board::~Board()
{

}

void					Board::initMap()
{
  int i;
  for (i = 0; i <= 8; ++i)
    {
      this->map[8][i] = GRASS;
      this->map[0][i] = GRASS;
    }

  for (i = 0; i <= 8; ++i)
    {
      this->map[7][i] = ROAD;
      this->map[6][i] = ROAD;
      this->map[5][i] = ROAD;
    }

  for ( i = 0; i <= 8; ++i)
    {
      this->map[4][i] = RAIL;
    }

  for (i = 0; i <= 8; ++i)
    {
      this->map[3][i] = WATER;
      this->map[2][i] = WATER;
      this->map[1][i] = WATER;
    }

  this->map[8][4] = FROG;
  
  this->map[7][0] = CAR;
  this->map[6][4] = TRUCKFACE;
  this->map[6][3] = TRUCKBACK;
  this->map[5][0] = CAR;

  this->map[4][0] = TRAINBACK;
  this->map[4][1] = TRAINMID;
  this->map[4][2] = TRAINFACE;

  this->map[3][3] = NENUPHAR;
  this->map[3][5] = NENUPHAR;
  this->map[3][7] = NENUPHAR;

  this->map[2][1] = WOODBACK;
  this->map[2][2] = WOODMID;
  this->map[2][3] = WOODFACE;

  this->map[2][6] = WOODBACK;
  this->map[2][7] = WOODFACE;

  this->map[0][2] = ESCAPE;
  this->map[0][4] = ESCAPE;
  this->map[0][6] = ESCAPE;
}

std::vector<std::vector<int> >		Board::getMap()const
{
  return (this->map);
}

int					Board::getWidth()const
{
  return (this->width);
}

int					Board::getHeight()const
{
  return (this->height);
}

void					Board::setCase(int stuff, int x, int y)
{
  this->map[x][y] = stuff;
}

int					Board::getCase(int x, int y)
{
  return (this->map[x][y]);
}
