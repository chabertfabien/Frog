#include "Graphic.h"
#include <iostream>

Graphic::Graphic()
{
  
}

Graphic::~Graphic()
{

}

void	Graphic::displayScreen(std::vector<std::vector<int> > const & map)
{
  std::cout << "-------------------" << std::endl;
  for (unsigned int i = 0; i < map[0].size(); ++i)
    {
      std::cout << "|";
      for (unsigned int j = 0; j < map.size(); ++j)
	{
	  std::cout << map[i][j] << "|";
	}
      std::cout << std::endl <<  "-------------------" << std::endl;
    }
  std::cout << std::endl;
}

int	Graphic::getKey()const
{
  return (0);
}
