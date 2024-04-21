# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: maheleni <maheleni@student.hive.fi>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/04/21 10:42:28 by maheleni          #+#    #+#              #
#    Updated: 2024/04/21 10:42:33 by maheleni         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRCS = ft_isalnum.c \
        ft_isalpha.c \
        ft_isdigit.c \
        ft_islower.c \
        ft_isupper.c \
        ft_tolower.c \
        ft_toupper.c

OBJS = $(SRCS:.c=.o)

CC = cc
CFLAGS = -Wall -Werror -Wextra
RM = rm -rf

all: $(NAME)

$(NAME): $(OBJS)
    ar -rcs $(NAME) $(OBJS)
    ranlib $(NAME)

%.o: %.c
    ${CC} ${CFLAGS} -c $< -o $@

clean:
    $(RM) $(OBJS)

fclean: clean
    $(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
