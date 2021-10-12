# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: thakala <thakala@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/08/20 03:51:08 by thakala           #+#    #+#              #
#    Updated: 2021/09/02 07:14:04 by thakala          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


LOCATION			= $(CURDIR)/

NAME				= ft_cat

HEADER_FILES		= $(LOCATION)includes/

SOURCES				= $(LOCATION)srcs/

C_FILES				= $(SOURCES)main.c $(SOURCES)ft_handle_file.c \
						$(SOURCES)ft_putstr.c $(SOURCES)main.c

O_FILES				= $(LOCATION)ft_display_file.o $(LOCATION)ft_handle_file.o \
						$(LOCATION)ft_putstr.o $(LOCATION)main.o

COMPILER			= gcc

MOULINETTE_FLAGS	= -Wall -Wextra -Werror

COMPILER_FLAGS_O	= $(MOULINETTE_FLAGS) -I$(HEADER_FILES) -c

COMPILER_FLAGS_C	= $(MOULINETTE_FLAGS) -I$(HEADER_FILES) -o $(NAME)

.PHONY: all $(NAME) clean fclean rm

all: $(NAME)

$(NAME):
	$(COMPILER) $(COMPILER_FLAGS_O) $(C_FILES)
	$(COMPILER) $(COMPILER_FLAGS_C) $(O_FILES)

clean:
	rm -f $(O_FILES)
fclean: clean
	rm -f $(NAME)

re: fclean all
