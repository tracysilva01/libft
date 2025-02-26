# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: trsilva- <trsilva-@student.42madrid.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/01/21 14:44:31 by trsilva-          #+#    #+#              #
#    Updated: 2025/02/18 23:42:30 by trsilva-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
SRCS =	ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c \
		ft_strlen.c ft_memset.c ft_bzero.c ft_memcpy.c ft_memmove.c \
		ft_memcmp.c ft_toupper.c ft_tolower.c ft_memchr.c ft_atoi.c \
		ft_strchr.c ft_strrchr.c ft_strdup.c ft_putchar_fd.c ft_strncmp.c \
		ft_strlcpy.c ft_putendl_fd.c ft_putnbr_fd.c ft_putstr_fd.c \
		ft_strjoin.c ft_strlcat.c ft_strnstr.c ft_substr.c ft_strtrim.c \
		ft_calloc.c ft_itoa.c ft_striteri.c ft_strmapi.c ft_split.c


# Object files
OBJ = $(SRCS:.c=.o)

# Compiler and flags
CC = gcc
CFLAGS = -Wall -Wextra -Werror
AR = ar
ARFLAGS = rcs
RM = rm -f

# Rules
.PHONY: all clean fclean re

all: $(NAME)

$(NAME): $(OBJ)
	$(AR) $(ARFLAGS) $@ $^

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all
