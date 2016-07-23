$(NAME)	=	santa

CC	=	gcc

SRC	=	santa.c \
		my_putstr.c

RM	=	rm -f

OBJ	=	$(SRC:.c=.o)

CFLAGS	+= 	-W -Wall -Werror


$(NAME)	=	$(OBJ)
		$(CC) -o $(NAME) $(OBJ)

all 	:	$(NAME)

clean 	:	
		$(RM) $(OBJ)
		$(RM) *~

fclean 	:	clean
		$(RM) $(NAME)

re 	:	fclean all