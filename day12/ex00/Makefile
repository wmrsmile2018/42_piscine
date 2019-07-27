# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bannabel <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/03/14 14:25:32 by bannabel          #+#    #+#              #
#    Updated: 2019/03/14 18:41:11 by bannabel         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

COMPILEFLAGS = -Wall -Wextra -Werror
NAME = ft_display_file
CSRC = ./src/ft_display_file.c
OBJ = ft_display_file.o

all: $(NAME)

$(NAME):
	gcc $(COMPILEFLAGS) -c $(CSRC)
	gcc $(COMPILEFLAGS) $(OBJ) -o $(NAME)

clean:
	rm -f *.o

fclean: clean
	rm -f $(NAME)

