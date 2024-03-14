NAME	= AMATERIA
CFLAGS	= -Wall -Wextra -Werror -std=c++98 -g3 -MD
RM		= @rm -rf
CC		= @c++
DIR		= @mkdir -p
PRINT	= @echo

DIRS	= sources/materials/
FILES	= $(basename $(shell find ./sources/ -type f -name "*.cpp"))

OBJS	= $(addsuffix .o, $(addprefix .Objects/, $(FILES)))
DPDS	= $(addsuffix .d, $(addprefix .Objects/, $(FILES)))

$(NAME): $(OBJS)
	$(PRINT) "Making $(NAME)..."
	$(CC) $(OBJS) -o $(NAME)
	$(PRINT) "$(NAME) done."

.Objects/%.o: ./%.cpp Makefile
	$(DIR) .Objects/$(DIRS)
	$(PRINT) "Compiling $<$(_END)..."
	$(CC) -c -I ./includes/ $(CFLAGS) $< -o $@

all: $(NAME)

clean:
	$(PRINT) "Cleaning Objects..."
	$(RM) $(OBJS)
	$(PRINT) "Objects cleaned."

fclean:
	$(PRINT) "Cleaning Objects..."
	$(RM) $(OBJS)
	$(PRINT) "Deleting Objects directory..."
	$(RM) .Objects
	$(PRINT) "Deleting $(NAME)..."
	$(RM) $(NAME)
	$(PRINT) "Objects cleaned."
	$(PRINT) "Objects directory deleted."
	$(PRINT) "$(NAME) deleted."

re: fclean all

.PHONY: all clean fclean re

-include $(OBJS:.o=.d)