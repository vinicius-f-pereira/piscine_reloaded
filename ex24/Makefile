# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vde-frei <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/07/15 20:17:33 by vde-frei          #+#    #+#              #
#    Updated: 2023/07/16 12:43:59 by vde-frei         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS = $(addprefix srcs/, ft_putchar.c ft_putstr.c ft_strcmp.c ft_strlen.c ft_swap.c)

NAME = libft.a

all: $(NAME)

$(NAME): $(SRCS:%.c=%.o)
	ar -rcs $(NAME) $(SRCS:%.c=%.o)
clean: 
	rm -f $(SRCS:%.c=%.o) 

fclean: clean
	rm -f $(NAME)
	echo $@

%.o: %.c
	cc -Wall -Wextra -Werror -c $< -o $@ 

re: fclean all
