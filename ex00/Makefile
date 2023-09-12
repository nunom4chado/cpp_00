NAME		= megaphone

CXX			= c++
CPPFLAGS	= -Wall -Wextra -Werror -std=c++98

OBJS		= megaphone.o

all: $(NAME)

$(NAME): $(OBJS)
	$(CXX) $(OBJS) -o $(NAME)

clean:
	rm $(OBJS)

fclean: clean
	rm $(NAME)

re: fclean all

.PHONY: all clean fclean re
