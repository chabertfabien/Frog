#ifndef BOARD_H_
#define BOARD_H_

#include <vector.h>

class Board
{
private:
	int			width;
	int			height;
	vector<vector<int> >	map;
	
private:
	Board(const Board & other);
	Board & operator=(const Board & other);

public:
	Board();
	~Board();

	int				Board::getWidth()const;
	int				Board::getHeight()const;
	std::vector<std::vector<int> >	Board::getMap()const;

	void				setCase(int x, int y, char item);
	char				getCase(int x, int y);
	void				initMap();
}

#endif	/*BOARD_H_*/
