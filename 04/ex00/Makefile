NAME = Animal

SRCS = src/main.cpp src/Dog.cpp src/Cat.cpp src/Animal.cpp src/WrongAnimal.cpp src/WrongCat.cpp

OBJS = $(SRCS:.cpp=.o)

CC = c++

RM = rm -f

CPPFLAGS = -Wall -Werror -Wextra -std=c++98 -I includes/

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CPPFLAGS) $(OBJS) -o $(NAME)

%.o: %.cpp
	$(CC) $(CPPFLAGS) -c -o $@ $<

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re