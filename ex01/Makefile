NAME    = claptrap
CXX     = c++
CXXFLAGS = -std=c++98

SRCS    = main.cpp ClapTrap.cpp ScavTrap.cpp
OBJS    = $(SRCS:.cpp=.o)
HEADERS = ClapTrap.hpp ScavTrap.hpp

all: $(NAME)

$(NAME): $(OBJS)
	$(CXX) $(CXXFLAGS) $(OBJS) -o $(NAME)

# Règle pour lier les objets aux headers
%.o: %.cpp $(HEADERS)
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re