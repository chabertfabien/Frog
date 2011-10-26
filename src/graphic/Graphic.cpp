#include "Graphic.h"
#include "Enums.h"
#include <iostream>

Graphic::Graphic()
{
  this->app.Create(sf::VideoMode(860, 600, 32), "Frog");

  if (!this->image.LoadFromFile("sprite/background.jpg"))
    {
      std::cerr << "Can't load bg" << std::endl;
      exit(0);
    }
  this->background.SetImage(this->image);

  if (!this->image.LoadFromFile("sprite/grass.jpg"))
    {
      std::cerr << "Can't load grass" << std::endl;
      exit(0);
    }
  this->spriteGrass.SetImage(this->image);

  if (!this->image.LoadFromFile("sprite/road.jpg"))
    {
      std::cerr << "Can't load road" << std::endl;
      exit(0);
    }
  this->spriteRoad.SetImage(this->image);

  if (!this->image.LoadFromFile("sprite/rail.jpg"))
    {
      std::cerr << "Can't load rail" << std::endl;
      exit(0);
    }
  this->spriteRail.SetImage(this->image);

  if (!this->image.LoadFromFile("sprite/water.jpg"))
    {
      std::cerr << "Can't load water" << std::endl;
      exit(0);
    }
  this->spriteWater.SetImage(this->image);

  if (!this->image.LoadFromFile("sprite/nenuphar.jpg"))
    {
      std::cerr << "Can't load nenuphar" << std::endl;
      exit(0);
    }
  this->spriteNenuphar.SetImage(this->image);

  if (!this->image.LoadFromFile("sprite/empty.jpg"))
    {
      std::cerr << "Can't load empty" << std::endl;
      exit(0);
    }
  this->spriteEmpty.SetImage(this->image);

  if (!this->image.LoadFromFile("sprite/car.jpg"))
    {
      std::cerr << "Can't load car" << std::endl;
      exit(0);
    }
  this->spriteCar.SetImage(this->image);

  if (!this->image.LoadFromFile("sprite/truck.jpg"))
    {
      std::cerr << "Can't load truck" << std::endl;
      exit(0);
    }
  this->spriteTruck.SetImage(this->image);

  if (!this->image.LoadFromFile("sprite/train.jpg"))
    {
      std::cerr << "Can't load train" << std::endl;
      exit(0);
    }
  this->spriteTrain.SetImage(this->image);

  if (!this->image.LoadFromFile("sprite/wood.jpg"))
    {
      std::cerr << "Can't load wood" << std::endl;
      exit(0);
    }
  this->spriteWood.SetImage(this->image);

  if (!this->image.LoadFromFile("sprite/escape.jpg"))
    {
      std::cerr << "Can't load escape" << std::endl;
      exit(0);
    }
  this->spriteEscape.SetImage(this->image);

  if (!this->image.LoadFromFile("sprite/frog.jpg"))
    {
      std::cerr << "Can't load frog" << std::endl;
      exit(0);
    }
  this->spriteFrog.SetImage(this->image);


  this->app.Display();
}

Graphic::~Graphic()
{

}

void	Graphic::displayScreen(Board * game)
{
  app.Clear();
    std::cout << "-------------------" << std::endl;
    for (unsigned int i = 0; i < game->getMap()[0].size(); ++i)
    {
    std::cout << "|";
    for (unsigned int j = 0; j < game->getMap().size(); ++j)
    {
    std::cout << game->getCase(i, j) << "|";
    }
    std::cout << std::endl <<  "-------------------" << std::endl;
    }
    std::cout << std::endl;
  

  for (unsigned int i = 0; i < game->getMap().size(); ++i)
    {
      for (unsigned int j = 0; j < game->getMap()[0].size(); ++j)
	{
	  switch(game->getCase(i, j))
	    {
	    case FROG :
	      {
		app.Draw(spriteFrog);
		spriteFrog.SetPosition(j * 60, i * 60);
		break;
	      }
	    case EMPTY : break;
	    case GRASS : break;
	    case ROAD : break;
	    case RAIL : break;
	    case WATER : break;
	    case NENUPHAR : break;
	    case CAR : break;
	    case TRUCKFACE : break;
	    case TRUCKBACK : break;
	    case TRAINFACE : break;
	    case TRAINMID : break;
	    case TRAINBACK : break;
	    case WOODFACE : break;
	    case WOODMID : break;
	    case WOODBACK : break;
	    case ESCAPE : break;
	    default : break;
	    }
	}
    }
  this->app.Display();
}

int	Graphic::getKey(float * timer1, float * timer2)
{
  sf::Event		Event;
  sf::Clock		clock;
   //this->app.GetEvent(Event);

  *timer1 = clock.GetElapsedTime();
  *timer2 = clock.GetElapsedTime();
  while (app.IsOpened() && *timer1 < *timer2 + 0.5)
    {
      while (app.GetEvent(Event))
        {
	  if (Event.Type == sf::Event::Closed)
	    this->app.Close();
	  if (Event.Type == sf::Event::KeyPressed)
	    {
	      std::cout << "pressed" << std::endl;
	      if (Event.Key.Code == sf::Key::Escape)
		return (END);
	      else if (Event.Key.Code == sf::Key::Right)
		return (RIGHT);
	      else if (Event.Key.Code == sf::Key::Left)
		return (LEFT);
	      else if (Event.Key.Code == sf::Key::Up)
		return (UP);
	      else if (Event.Key.Code == sf::Key::Down)
		return (DOWN);
	    }
	  
        }
      *timer2 = clock.GetElapsedTime();
    }
  std::cout << "TOUR" << std::endl;
  return (-1);
}

