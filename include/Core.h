#ifndef CORE_H_
#define CORE_H_

#include	"Graphic.h"
#include	"Board.h"

class Core
{
private:
	int	score;
	float	time;
	int	x;
	int	y;
	
private:
	Core(const Core & other);
	Core & operator=(const Core & other);

public:
	Core();
	~Core();
	void	launch();
	void	moveFrog(const int key, const std::vector<std::vector< int> > & map);
	bool	hasLost(const std::vector<std::vector< int> > & map);
};

#endif	/*CORE_H_*/
