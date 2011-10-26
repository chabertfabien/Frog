#ifndef GRAPHIC_H_
#define GRAPHIC_H_

#include <SFML/Window.hpp>
#include <SFML/System.hpp>
#include <SFML/Audio.hpp>
#include <SFML/Graphics.hpp>
#include "Board.h"

class Graphic
{
private:
	Graphic(const Graphic & other);
	Graphic & operator=(const Graphic & other);

 private:
	sf::RenderWindow     app;
	sf::Image             image;
	sf::Sprite            background;
	sf::Sprite            spriteFrog;
	sf::Sprite            spriteGrass;
	sf::Sprite            spriteRoad;
	sf::Sprite            spriteRail;
	sf::Sprite            spriteWater;
	sf::Sprite            spriteNenuphar;
	sf::Sprite            spriteEmpty;
	sf::Sprite            spriteCar;
	sf::Sprite            spriteTruck;
	sf::Sprite            spriteTrain;
	sf::Sprite            spriteWood;
	sf::Sprite            spriteEscape;

 public:
	Graphic();
	~Graphic();
	void	displayScreen(Board * game);
  	int	getKey(float * timer1, float * timer2);
	//voir comment fonctionne la SFML
};

#endif	/*GRAPHIC_H_*/
