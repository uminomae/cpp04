#=============================
#flags
#=============================
NAME		:= cppm
CXX			:= c++
CXXFLAGS	:= -Wall -Wextra -Werror -O -std=c++98
RM			:= rm -f
DFLAGS		:= -MMD -MP
#=============================
#src
#=============================
SRCDIR		= srcs
SRCS		:= 	\
srcs/main.cpp \
srcs/Animal.cpp \
srcs/Dog.cpp \
srcs/Cat.cpp \


# find srcs -type  f -name '*.c'
#=============================
#directory
#=============================
INCDIR		= include/
INCLUDE		= -I$(INCDIR)
OBJDIR		= obj
ifeq "$(strip $(OBJDIR))" ""
  OBJDIR	= .
endif
OBJECTS    :=  $(patsubst $(SRCDIR)%, $(OBJDIR)%, $(SRCS:%.cpp=%.o))
DEPENDS    :=  $(patsubst $(SRCDIR)%, $(OBJDIR)%, $(SRCS:%.cpp=%.d))
#=============================
#rule
#=============================
all: $(NAME) 

$(NAME): $(OBJECTS)
	@echo $(BLUE)"----- $(NAME) $(CXX) start-----"$(RESET)
	$(CXX) -o $@ $^ $(CXXFLAGS) $(DFLAGS) $(INCLUDE) 
	@echo $(GREEN)"----- $(NAME) $(CXX) done-----"$(RESET)
	@echo $(SKYBLUE) "make.o" $(RESET)
#-----
$(OBJDIR)/%.o: $(SRCDIR)/%.cpp
	 -mkdir -p $(@D) 
	$(CXX) $(CXXFLAGS) $(DFLAGS) $(INCLUDE) -c $< -o $@ 


clean:
	$(RM) $(OBJECTS) $(DEPENDS)
	@echo $(YELLOW)"----- $(NAME) clean done-----"$(RESET)

fclean:	clean
	$(RM) $(NAME)
	@echo $(RED)"----- $(NAME) fclean done-----"$(RESET)

re: fclean all

-include $(DEPENDS)

.PHONY: all clean fclean re 
#=============================
#make option
#=============================
d: CXXFLAGS +=  -g -fsanitize=address -fsanitize=undefined
d: re

s:
	make d
	./cppm
 
#=============================
#color
#=============================
RED			=	"\033[31m"
GREEN		=	"\033[32m"
YELLOW		=	"\033[33m"
BLUE		=	"\033[34m"
PURPLE		=	"\033[35m"
SKYBLUE		=	"\033[36m"
RESET		=	"\033[0m"