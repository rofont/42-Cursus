# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rofontai <rofontai@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/24 16:49:17 by rofontai          #+#    #+#              #
#    Updated: 2022/10/25 15:29:00 by rofontai         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRC	= 	ft_memmove.c \
		ft_isalpha.c \
		ft_isalnum.c \
		ft_isascii.c \
		ft_isdigit.c \
		ft_toupper.c \
		ft_memset.c \
		ft_strchr.c \
		ft_strlen.c \
		ft_strlcpy.c \
		ft_tolower.c \
		ft_strncmp.c \
		ft_strrchr.c \
		ft_strlcat.c \
		ft_isprint.c \
		ft_memchr.c \
		ft_bzero.c \
		ft_memcpy.c \
		ft_memcmp.c \



OBJS = $(SRC:.c=.o)

CC = gcc
CFLAGS = -Wall -Werror -Wextra
RM = rm -rf
AR = ar crs

$(NAME): $(OBJS)
	$(AR) $@ $^

%.o: %.c
	$(CC) $(CFLAGS) -c $^ -o $@

all: $(NAME)

clean:
	$(RM) $(OBJS)

fclean:	clean
	$(RM) $(NAME)

re:	fclean all












