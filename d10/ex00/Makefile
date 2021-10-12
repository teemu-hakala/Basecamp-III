# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: thakala <thakala@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/08/20 03:51:08 by thakala           #+#    #+#              #
#    Updated: 2021/08/31 17:59:26 by thakala          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


LOCATION = $(CURDIR)/

HEADER_FILES = $(LOCATION)includes/

COMPILER = gcc

COMPILER_FLAGS = -c -Wall -Wextra -Werror -I$(HEADER_FILES)

CREATE_LIBRARY = ar rc

NAME = libft.a

SOURCE_FILES = ft_putchar.o ft_putstr.o ft_strcmp.o ft_strlen.o ft_swap.o

.PHONY: all $(NAME) clean fclean rm
.PHONY: $(SOURCE_FILES)

all: $(NAME)

$(NAME): $(SOURCE_FILES)
	$(CREATE_LIBRARY) $(LOCATION)$(NAME) $(SOURCE_FILES)

ft_putchar.o:
	$(COMPILER) $(COMPILER_FLAGS) $(LOCATION)srcs/ft_putchar.c

ft_putstr.o:
	$(COMPILER) $(COMPILER_FLAGS) $(LOCATION)srcs/ft_putstr.c

ft_strcmp.o:
	$(COMPILER) $(COMPILER_FLAGS) $(LOCATION)srcs/ft_strcmp.c

ft_strlen.o:
	$(COMPILER) $(COMPILER_FLAGS) $(LOCATION)srcs/ft_strlen.c

ft_swap.o:
	$(COMPILER) $(COMPILER_FLAGS) $(LOCATION)srcs/ft_swap.c

clean:
	rm -f *.o

fclean: clean
	rm -f $(NAME)

re: fclean all
