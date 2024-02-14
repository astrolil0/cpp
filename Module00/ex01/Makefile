
NAME = my_awesome_phonebook

FLAGS = -Wall -Wextra -Werror -std=c++98

CP = clang++

HEADERS = Contact.hpp Phonebook.hpp

SRC = Contact.cpp Phonebook.cpp main.cpp

all: $(NAME)

$(NAME): $(SRC) $(HEADERS)
	$(CP) $(FLAGS) $(SRC) -o $(NAME)

clean:
	@echo "No object files to be cleaned!"

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re