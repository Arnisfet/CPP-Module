SRCS			=   main.cpp Karen.cpp

OBJS			= $(SRCS:.cpp=.o)

CXX				= c++
RM				= rm -f
CXXFLAGS		= -Wall -Werror -Wextra -I. -std=c++98

NAME			= Karen

all:			$(NAME)

$(NAME):		$(OBJS)
				$(CXX) $(CXXFLAGS)  -g -o $(NAME) $(OBJS)

clean:
				$(RM) $(OBJS)

fclean:			clean
				$(RM) $(NAME)

re:				fclean $(NAME)

.PHONY:			all clean fclean re test
