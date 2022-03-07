SRCS			=   main.cpp
OBJS			= $(SRCS:.cpp=.o)

CXX				= c++

CXXFLAGS		= -Wall -Werror -Wextra -I. -std=c++98 -g -MMD

DEP				= $(OBJS:.o=.d)

NAME			= Iter

all:			$(NAME)

$(NAME):		$(OBJS)
				$(CXX) $(CXXFLAGS) -o $(NAME) $(OBJS)

clean:
				$(RM) $(OBJS) $(DEP)

fclean:			clean
				$(RM) $(NAME)

re:				fclean $(NAME)

include $(wildcard $(DEP))

.PHONY:			all clean fclean re test