#ifndef GRAPHIC_H_
#define GRAPHIC_H_

#include <SFML/Windows.hpp>
#include <SFML/Systems.hpp>
#include <SFML/Graphics.hpp>
#include <SFML/Graphics.hpp>
#include <SFML/Audio.hpp>

class Graphic
{
private:
	Graphic(const Graphic & other);
	Graphic & operator=(const Graphic & other);

public:
	Graphic();
	~Graphic(){}
	void	displayScreen(std::vector<std::vector<int> > const & board);
  	int	getKey()const;
	//voir comment fonctionne la SFML
}

#endif	/*GRAPHIC_H_*/
