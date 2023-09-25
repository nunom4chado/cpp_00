NAME		= 	phonebook

CXX			= 	c++
CXXFLAGS	= 	-Wall -Wextra -Werror -std=c++98

HEADERS		:=	Contact.class.hpp\
				PhoneBook.class.hpp\
				phonebook.hpp

SRCS		:= 	main.cpp\
				Contact.class.cpp\
				PhoneBook.class.cpp\
				print_headers.cpp\
				utils.cpp

OBJDIR		:= 	obj
OBJ 		:= 	$(SRCS:%.cpp=$(OBJDIR)/%.o)


# ---------------------------------------------------------------------------- #
#                                  BASE RULES                                  #
# ---------------------------------------------------------------------------- #
all: $(NAME)

$(NAME): $(OBJ)
	$(CXX) $(OBJ) -o $(NAME)

$(OBJDIR)/%.o: %.cpp
	@mkdir -p '$(@D)'
	$(CXX) -c $(CXXFLAGS) $< -o $@

clean:
	rm -rf $(OBJDIR)

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re format
