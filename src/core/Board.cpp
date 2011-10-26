#include	<iostream>
#include	"Board.h"

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
  this->map[0][7] = 6;
  this->map[4][6] = 7;
  this->map[3][6] = 8;
  this->map[0][5] = 6;

  this->map[0][4] = 10;
  this->map[1][4] = 10;
  this->map[2][4] = 9;

  this->map[3][3] = 11;
  this->map[5][3] = 11;
  this->map[4][3] = 11;

  this->map[1][2] = 12;
  this->map[2][2] = 13;
  this->map[3][2] = 14;

  this->map[6][2] = 12;
  this->map[7][2] = 14;

  this->map[2][0] = 15;
  this->map[4][0] = 15;
  this->map[6][0] = 15;
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
