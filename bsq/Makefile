# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: thakala <thakala@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/09/03 14:03:25 by mrozhnov          #+#    #+#              #
#    Updated: 2021/09/08 15:27:46 by thakala          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = bsq

SRCS = srcs/

SRC = $(SRCS)main.c $(SRCS)ft_validate_map.c $(SRCS)ft_putnbr.c \
	$(SRCS)ft_putchar.c $(SRCS)ft_print_matrix.c $(SRCS)ft_atoi_bsq.c \
	$(SRCS)ft_putstr.c $(SRCS)ft_link.c $(SRCS)ft_free.c $(SRCS)ft_error.c \
	$(SRCS)ft_map_key.c $(SRCS)ft_first_line.c $(SRCS)ft_interpret_rows.c \
	$(SRCS)ft_initialize.c $(SRCS)ft_helpers.c

OBJ = main.o ft_validate_map.o ft_putnbr.o ft_putchar.o ft_print_matrix.o \
	ft_atoi_bsq.o ft_putstr.o ft_link.o ft_free.o ft_error.o ft_map_key.o \
	ft_first_line.o ft_interpret_rows.o ft_initialize.o ft_helpers.o

FLAGS = -Wall -Wextra -Werror -I /includes/

all: $(NAME)

$(NAME): $(OBJ)
	gcc $(FLAGS) $(OBJ) -o $(NAME)

$(OBJ): $(SRC)
	gcc -c $(FLAGS) $(SRC)

clean:
	/bin/rm -f $(OBJ)

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all
