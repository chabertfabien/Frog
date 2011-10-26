#ifndef CORE_H_
#define CORE_H_

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
	void	gameLoop();
	bool	hasLost();
}

#endif	/*CORE_H_*/
