NAME = fragtrap
CC = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98

SRCS = main.cpp ClapTrap.cpp ScavTrap.cpp FragTrap.cpp

OBJS = $(SRCS:.cpp=.o)

all : $(NAME)

$(NAME) : $(OBJS) $(SRCS)
	$(CC) $(CFLAGS) $(OBJS) -o $@

clean : 
	rm -f $(OBJS)

fclean : clean 
	rm -f $(NAME)

re : clean all

.PHONY: all clean fclean re