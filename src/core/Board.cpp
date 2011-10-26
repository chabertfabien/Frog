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
  this->map[4][8] = 1;
  
  this->map[0][7] = CAR;
  this->map[4][6] = TRUCKFACE;
  this->map[3][6] = TRUCKBACK;
  this->map[0][5] = CAR;

  this->map[0][4] = TRAINBACK;
  this->map[1][4] = TRAINMID;
  this->map[2][4] = TRAINFACE;

  this->map[3][3] = NENUPHAR;
  this->map[5][3] = NENUPHAR;
  this->map[4][3] = NENUPHAR;

  this->map[1][2] = WOODBACK;
  this->map[2][2] = WOODMID;
  this->map[3][2] = WOODFACE;

  this->map[6][2] = WOODBACK;
  this->map[7][2] = WOODFACE;

  this->map[2][0] = ESCAPE;
  this->map[4][0] = ESCAPE;
  this->map[6][0] = ESCAPE;
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
