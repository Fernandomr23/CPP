NAME = phonebook

SRCS = main.cpp PhoneBook.cpp Contact.cpp

OBJS = $(SRCS:.cpp=.o)

CC = g++

RM = rm -f

CPPFLAGS = -Wall -Wextra -Werror -std=c++98 -pedantic

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CPPFLAGS) $(OBJS) -o $(NAME)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re