# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: karpatel <karpatel@student.hive.fi>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/06/24 10:05:34 by karpatel          #+#    #+#              #
#    Updated: 2024/06/24 10:05:42 by karpatel         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap
CC = cc
CFLAGS = -Wall -Wextra -Werror
SOURCES = push_swap.c parsing.c validateargs.c error.c push_swapfunc1.c \
			push_swapfunc2.c push_swapfunc3.c push_swapfunc4.c algorithm.c
OBJECTS = $(SOURCES:.c=.o)
LIBDIR = ./libft

all: $(NAME)

$(NAME): $(OBJECTS)
	$(MAKE) -C $(LIBDIR)
	$(CC) -o $@ $(CFLAGS) $^ ./libft/libft.a

$(SOURCE_DIR)/%.o: %.c
	$(CC) -I -c $(CFLAGS) $< -o $@

clean:
	$(MAKE) -C $(LIBDIR) $@
	rm -f $(OBJECTS)

fclean: clean
	$(MAKE) -C $(LIBDIR) $@
	rm -f $(NAME)

re: fclean all

debug: re

.PHONY: debug all clean fclean re
