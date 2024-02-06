NAME = PhoneBook

FLAGS = -Wall -Wextra -Werror

RESET			= 	\033[0m
GREEN 			= 	\033[38;5;46m
WHITE 			= 	\033[38;5;15m
GREY 			= 	\033[38;5;8m
ORANGE 			= 	\033[38;5;202m
RED 			= 	\033[38;5;160m

FILE = 	PhoneBook.cpp \
		Contact.cpp \

OBJ_FILE = $(FILE:.cpp=.o)

COLOUR_GREEN=\033[1;32m

COLOUR_RED=\033[1;31m

all : $(NAME)

$(NAME) : $(OBJ_FILE) contact.hpp  phoneBook.hpp 
	@c++ -std=c++98 $(FLAGS) $(FILE) -o $(NAME)
	@echo "$(COLOUR_GREEN)--->[mandatory part successfully created ✅]<---"
	
%.o: %.cpp  Contact.hpp  PhoneBook.hpp 
	@c++ -std=c++98 $(FLAGS) -c $< -o $@
	
clean :
	@rm -rf $(OBJ_FILE) 
	@echo "$(COLOUR_RED)--->[obj file deleted successfully ✅]<---"

fclean: clean
	@rm -f $(NAME)
	@echo "$(COLOUR_RED)--->[program deleted successfully ✅]<---"


re : fclean all

coffee	:

	@echo "$(ORANGE)╔══════════════════════════╗$(RESET)"
	@echo "       $(RED)☎ My Phone ☎$(RESET)"
	@echo "$(ORANGE)╚══════════════════════════╝$(RESET)"
