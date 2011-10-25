#ifndef ITEMS_H_
#define ITEMS_H_

class Items
{
private:
	float	speed;
	int	lengh;
	
private:
	Items(const Items & other);
	Items & operator=(const Items & other);

public:
	Items();
	virtual ~Items();
	virtual void	moveUp();
	virtual void	moveDown();
	virtual void	moveLeft();
	virtual void	moveRight();
}

#endif	/*ITEMS_H_*/
