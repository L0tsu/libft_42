# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jumoreau <jumoreau@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/05/12 15:56:38 by jumoreau          #+#    #+#              #
#    Updated: 2021/06/14 08:54:01 by lotus            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#-----------------------------MAIN VARIABLES-----------------------------------#

SRCS			=	ft_isalnum.c ft_isprint.c ft_memcmp.c   ft_split.c \
					ft_strlcat.c ft_strncmp.c ft_substr.c ft_atoi.c ft_isalpha.c \
					ft_itoa.c ft_memcpy.c   ft_strchr.c  ft_strlcpy.c \
					ft_strnstr.c ft_tolower.c ft_bzero.c   ft_isascii.c ft_memccpy.c \
					ft_memmove.c   ft_strdup.c  ft_strlen.c  ft_strrchr.c \
					ft_toupper.c ft_calloc.c  ft_isdigit.c ft_memchr.c  ft_memset.c  \
					ft_strjoin.c ft_strmapi.c ft_strtrim.c \
					#ft_putstr_fd.c
					#ft_putchar_fd.c
					#ft_putnbr_fd.c
					#ft_putendl_fd.c
OBJS			= $(SRCS:.c=.o)

#BONUS			=	ft_lstadd_back.c ft_lstadd_front.c ft_lstclear.c \
					ft_lstdelone.c ft_lstiter.c ft_lstlast.c \
					ft_lstmap.c ft_lstnew.c ft_lstsize.c
BONUS_OBJS		= $(BONUS:.c=.o)
CC				= gcc
RM				= rm -f
CFLAGS			= -Wall -Wextra -Werror -I.
NAME			= libft.a
OUT				= main.out

all:			$(NAME)

$(NAME):		$(OBJS)
				ar rcs $(NAME) $(OBJS)

clean:
				$(RM) $(OBJS) $(BONUS_OBJS) $(OUT)

fclean:			clean
				$(RM) $(NAME)

re:				fclean $(NAME)

out:
	@$(CC) -o $(OUT) mymain.c $(SRCS)
	@./$(OUT)
bonus:			$(OBJS) $(BONUS_OBJS)
				ar rcs $(NAME) $(OBJS) $(BONUS_OBJS)

.PHONY:			all clean fclean re bonus
#######################################################

git:
	git add .
	git commit -m "new"
	git push origin master
