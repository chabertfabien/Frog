#ifndef BOARD_H_
#define BOARD_H_

#include <vector>
#include <iostream>

class Board
{
 private:
  int					width;
  int					height;
  std::vector<std::vector<int> >	map;
  
 private:
  Board(const Board & other);
  Board & operator=(const Board & other);
  
 public:
  Board();
  ~Board();
	
  int					getWidth()const;
  int					getHeight()const;
  std::vector<std::vector<int> >	getMap()const;
  
  void					setCase(int stuff, int x, int y);
  int					getCase(int x, int y);
  void					initMap();
};

#endif	/*BOARD_H_*/
