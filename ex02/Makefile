NAME = forms

SRC_DIR = src
INC_DIR = includes
BLD_DIR = obj

CXX = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98 -pedantic
RM = rm -rf
INCLUDES = -I$(INC_DIR)

SRC_FILES = main.cpp \
		Bureaucrat.cpp \
		AForm.cpp \
		ShrubberyCreationForm.cpp \
		
SOURCES = $(addprefix $(SRC_DIR)/, $(SRC_FILES))

OBJS = $(patsubst $(SRC_DIR)/%.c, $(BLD_DIR)/%.o,$(SOURCES))

all: $(NAME)

$(BLD_DIR)/%.o: $(SRC_DIR)/%.c | $(BLD_DIR)
	$(CXX) $(CXXFLAGS) $(INCLUDES) -c $< -o $@

$(BLD_DIR):
	mkdir -p $(BLD_DIR)

$(NAME): $(OBJS)
	$(CXX) $(OBJS) $(INCLUDES) -o $(NAME)

clean:
	@$(RM) $(BLD_DIR)

fclean:
	@$(RM) $(BLD_DIR) $(NAME)

re: fclean all

.PHONY: all clean fclean re