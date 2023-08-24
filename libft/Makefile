# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: eel-moun <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/18 02:13:44 by eel-moun          #+#    #+#              #
#    Updated: 2021/11/18 02:34:25 by eel-moun         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS = ft_isalpha.c ft_memcmp.c ft_putendl_fd.c ft_strdup.c ft_strlen.c ft_strtrim.c ft_atoi.c ft_isascii.c ft_memcpy.c ft_putnbr_fd.c ft_striteri.c ft_strmapi.c ft_substr.c ft_bzero.c ft_isdigit.c ft_memmove.c ft_putstr_fd.c ft_strjoin.c ft_strncmp.c ft_tolower.c ft_calloc.c ft_isprint.c ft_memset.c ft_split.c ft_strlcat.c ft_strnstr.c ft_toupper.c ft_isalnum.c ft_itoa.c ft_memchr.c ft_putchar_fd.c ft_strchr.c ft_strlcpy.c ft_strrchr.c
NAME = libft.a
CC = gcc
CFLAGS = -Wall -Wextra -Werror
SRCB = ft_lstadd_back.c	ft_lstclear.c ft_lstiter.c ft_lstmap.c ft_lstsize.c ft_lstadd_front.c ft_lstdelone.c ft_lstlast.c ft_lstnew.c

OBJS = $(SRCS:.c=.o)
OBJB = $(SRCB:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	ar cr $(NAME) $(OBJS)

%.o : %.c libft.h
	$(CC) $(CFLAGS) -c $<

bonus: $(OBJS) $(OBJB)
	ar cr $(NAME) $(OBJS) $(OBJB)

clean:
	rm -rf $(OBJS) $(OBJB)

fclean: clean
	rm -rf $(NAME)

re: fclean all

