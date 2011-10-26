CXX		=	g++
IDSFLG          =       -I./include/
CXXFLAGS	+=	-Wall -Wextra -O2 $(IDSFLG)
FLAGNAME	=	-o
NAME		=	frog

SRC		=	src/core/Core.cpp	\
			src/core/Board.cpp	\
			src/graphic/Graphic.cpp	\
			src/core/main.cpp


OBJ		=	$(SRC:.cpp=.o)
RM		=	rm -f
TRASH		=	*~

.PHONY		:	all, clean, fclean, re

all		:	$(NAME)

$(NAME)		:	$(OBJ)
			$(CXX) $(FLAGNAME) $(NAME) $(OBJ)

clean		:
			$(RM) $(OBJ)

fclean		:	clean
			$(RM) $(NAME)

re		:	fclean all