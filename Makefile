# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gwynton <gwynton@student.21-school.ru>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/04/30 04:48:58 by gwynton           #+#    #+#              #
#    Updated: 2020/05/01 08:58:10 by gwynton          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

BATCH1 = ft_memset.c ft_bzero.c ft_memcpy.c ft_memccpy.c ft_memmove.c ft_memchr.c ft_memcmp.c ft_strlen.c ft_strlcpy.c ft_strlcat.c ft_strchr.c ft_calloc.c ft_strdup.c
BATCH2 = ft_strrchr.c ft_strnstr.c ft_strncmp.c ft_atoi.c ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c ft_toupper.c ft_tolower.c
BATCH3 = ft_substr.c ft_strjoin.c ft_strtrim.c ft_split.c ft_itoa.c ft_strmapi.c ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c
SOURCES = $(BATCH1) $(BATCH2) $(BATCH3)
BONUSSRC = ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c ft_lstadd_back.c ft_lstdelone.c ft_lstclear.c ft_lstiter.c ft_lstmap.c
BONUSOBJ = $(BONUSSRC:.c=.o)
HEADER = ./
NAME = libft.a
OBJECTS = $(SOURCES:.c=.o)
COMPILER = gcc -c -Wall -Wextra -Werror
.PHONY: all clean fclean re bonus
all: $(NAME)
$(NAME):
	@$(COMPILER) $(SOURCES) -I $(HEADER)
	@ar rcs $(NAME) $(OBJECTS)
clean:
	@rm -f $(OBJECTS)
	@rm -f $(BONUSOBJ)
fclean: clean
	@rm -f $(NAME)
re: fclean all
bonus:
	@$(COMPILER) $(BONUSSRC) -I $(HEADER)
	@ar rcs $(NAME) $(BONUSOBJ)
