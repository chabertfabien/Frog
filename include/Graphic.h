#ifndef GRAPHIC_H_
#define GRAPHIC_H_

#include <SFML/Window.hpp>
#include <SFML/System.hpp>
#include <SFML/Audio.hpp>
#include <SFML/Graphics.hpp>

class Graphic
{
private:
	Graphic(const Graphic & other);
	Graphic & operator=(const Graphic & other);

public:
	Graphic();
	~Graphic();
	void	displayScreen(std::vector<std::vector<int> > const & map);
  	int	getKey()const;
	//voir comment fonctionne la SFML
};

#endif	/*GRAPHIC_H_*/
