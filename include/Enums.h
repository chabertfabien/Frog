#ifndef	ENUMS_H_
#define	ENUMS_H_

enum	eDirection
  {
    GAUCHE,
    BAS,
    DROITE,
    HAUT
  };

enum	eSnake
  {
    EMPTY,
    SNAKEBODY,
    SNAKEHEAD,
    FRUIT
  };

#define	KEY_RIGHT	275
#define	KEY_LEFT	276

typedef		struct	posFruit
{
  int		x;
  int		y;
}			posFruit;

typedef		struct	posSnake
{
  bool		head;
  int		x;
  int		y;
  eDirection	direction;

}			posSnake;

#endif	/*ENUM_H_*/
