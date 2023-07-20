CFILES = ft_putchar.c ft_swap.c ft_putstr.c ft_strlen.c ft_strcmp.c

NAME = libft.a

MY_SOURCES = $(addprefix ./srcs/, $(CFILES))

MY_OBJECTS = $(MY_SOURCES:.c=.o)

INCLUDES = $(addprefix ./includes/, ft.h)

CFLAGS += -Wall -Wextra -Werror

CD_SRCS = $(shell cd srcs)

CD_BACK = $(shell cd -)

.c.o:
		$(CD_SRCS)
		cc $(CFLAGS) -I $(INCLUDES) -c < $(MY_OBJECTS)
		echo compiled these files $(MY_SOURCES) and included header files $(INCLUDES)
		$(CD_BACK)

$(NAME): .c.o
		ar rc $(NAME) $(MY_OBJECTS)
		echo archived the files into a library $(NAME)

all: $(NAME)

clean:
		rm -fr $(MY_OBJECTS)
		echo just cleaned the kitchen

fclean: clean
		rm -fr $(NAME)
		echo just cleaned the house

re:	fclean all

