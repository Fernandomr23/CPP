NAME = PmergeMe

SRCS = main.cpp PmergeMe.cpp

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