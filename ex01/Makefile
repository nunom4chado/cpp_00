NAME		= phonebook

CXX			= c++
CPPFLAGS	= -Wall -Wextra -Werror -std=c++98

OBJS		= 	main.o\
				Contact.class.o\
				PhoneBook.class.o\
				print_headers.o\
				utils.o

all: $(NAME)

$(NAME): $(OBJS)
	$(CXX) $(OBJS) -o $(NAME)

clean:
	rm -rf $(OBJS)

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re
