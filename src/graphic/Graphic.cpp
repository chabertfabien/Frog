#include "Graphic.h"

Graphic::Graphic()
{
  
}

Graphic::~Graphic()
{

}

void	displayScreen(std::vector<std::vector<int> > const & board)
{
  for (unsigned int i = 0; i < board[0].size(); ++i)
    {
      for (unsigned int j = 0; j < board.size(); ++j)
	{
	  std::cout << board[i][j] << std::endl;
	}
    }
}

int	getKey()const
{
  return (0);
}
