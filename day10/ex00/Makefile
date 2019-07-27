# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hstark <hstark@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/03/11 16:36:26 by hstark            #+#    #+#              #
#    Updated: 2019/03/11 16:36:29 by hstark           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRC = ./srcs/ft_putchar.c ./srcs/ft_putstr.c ./srcs/ft_strcmp.c ./srcs/ft_strlen.c ./srcs/ft_swap.c 
OBJECT = ft_putchar.o ft_putstr.o ft_strcmp.o ft_strlen.o ft_swap.o

FLAGS = -Wall -Wextra -Werror
OPTIONS = -c -I ./includes/

all: $(NAME)

$(NAME):
		gcc $(FLAGS) $(SRC) $(OPTIONS)
		ar rc $(NAME) $(OBJECT)
		ranlib $(NAME)
	
clean:
		rm -f $(OBJECT)

fclean: clean
		rm -f $(NAME)

re: fclean	all
