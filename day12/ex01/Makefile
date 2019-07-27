# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bannabel <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/03/14 14:25:32 by bannabel          #+#    #+#              #
#    Updated: 2019/03/14 20:55:33 by bannabel         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

COMPILEFLAGS = -Wall -Wextra -Werror
NAME = cat
CSRC = ./src/ft_cat.c
OBJ = ft_cat.o

all: $(NAME)

$(NAME):
	gcc $(COMPILEFLAGS) -c $(CSRC)
	gcc $(COMPILEFLAGS) $(OBJ) -o $(NAME)

clean:
	rm -f *.o

fclean: clean
	rm -f $(NAME)

