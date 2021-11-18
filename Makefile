# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ababa <marvin@42.fr>                       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/15 14:27:49 by ababa             #+#    #+#              #
#    Updated: 2021/11/17 17:36:49 by ababa            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = cc

NAME =libft.a

FLAGS =-Wall -Werror -Wextra

C_FILES = ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c\
        ft_isalpha.c ft_isdigit.c ft_isalnum.c\
        ft_memmove.c ft_strlcpy.c ft_strlcat.c\
        ft_toupper.c ft_tolower.c ft_strchr.c\
        ft_strrchr.c ft_strncmp.c ft_memchr.c\
        ft_isascii.c ft_isprint.c ft_strlen.c\
        ft_itoa.c ft_strmapi.c ft_striteri.c\
        ft_strjoin.c ft_strtrim.c ft_split.c\
        ft_calloc.c ft_strdup.c ft_substr.c\
        ft_memcmp.c ft_strnstr.c ft_atoi.c\
        ft_memset.c ft_bzero.c ft_memcpy.c\
        ft_putnbr_fd.c

O_FILES=  $(C_FILES:.c=.o)
	
all: $(NAME)

$(NAME): $(O_FILES)

%.o: %.c
	$(CC) -c $(FLAGS) $<
	ar -rcs	$(NAME) $@

re: fclean all

fclean: clean
	rm -f $(NAME)
clean:
	rm -f $(O_FILES)
