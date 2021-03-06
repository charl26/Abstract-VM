NAME		=	AbstractVM

SRC			=	main.cpp            \
				Operand.cpp         \
				OperandFactory.cpp  \
				VmStack.cpp         \
				VMExceptions.cpp    \
				IOperand.cpp

OBJ         =   $(SRCS:.cpp=.o)

CC          =   clang++ -std=gnu++11

CPPFLAGS    =   -Wall -Wextra -Werror

RM          =   rm -rf

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CPPFLAGS) $(SRC) -o $(NAME)
clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean
	$(MAKE) all