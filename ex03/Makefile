NAME= diamondtrap
INCLUDES= DiamondTrap.hpp
SRCS= DiamondTrap.cpp ScavTrap.cpp ClapTrap.cpp FragTrap.cpp  main.cpp
CXX = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98

OBJS=$(SRCS:.cpp=.o)

all: $(NAME)

$(NAME): $(INCLUDES) $(OBJS)
	$(CXX) $(CXXFLAGS) -o $(NAME) $(OBJS)
	@echo "DONE ✅"

clean:
	@rm -f $(OBJS)

fclean: clean
	@rm -f $(NAME)

re:clean all

.PHONY: all clean fclean re
