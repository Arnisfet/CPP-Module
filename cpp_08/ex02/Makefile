SRCS			=   main.cpp
OBJS			= $(SRCS:.cpp=.o)

CXX				= c++

CXXFLAGS		= -Wall -Werror -Wextra -I. -std=c++98 -g -MMD

DEP				= $(OBJS:.o=.d)

NAME			= Array

all:			$(NAME)

$(NAME):		$(OBJS)
				$(CXX) $(CXXFLAGS) -o $(NAME) $(OBJS)

clean:
				$(RM) $(OBJS) $(DEP)

fclean:			clean
				$(RM) $(NAME) Array.o Array.d

re:				fclean $(NAME)

include $(wildcard $(DEP))

.PHONY:			all clean fclean re test