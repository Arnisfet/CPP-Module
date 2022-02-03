SRCS			=   main.cpp telephone.cpp contact.cpp
OBJS			= $(SRCS:.cpp=.o)

CXX				= clang++
RM				= rm -f
CXXFLAGS		= -I.

NAME			= directory

all:			$(NAME)

$(NAME):		$(OBJS)
				$(CXX) $(CXXFLAGS) -std=c++98 -g -o $(NAME) $(OBJS)

clean:
				$(RM) $(OBJS)

fclean:			clean
				$(RM) $(NAME)

re:				fclean $(NAME)

.PHONY:			all clean fclean re test
