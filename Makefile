# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jumoreau <jumoreau@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/05/12 15:56:38 by jumoreau          #+#    #+#              #
#    Updated: 2021/06/03 14:45:21 by lotus            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#-----------------------------MAIN VARIABLES-----------------------------------#
MAIN 		=mymain.c
NAME		=LibFt
OUT 		=mainout.o
LIBRARY 	=libft.h
FUNCTIONS 	=\
			ft_strlen.c\
			ft_isalpha.c\
			ft_isdigit.c\
			ft_isalnum.c\
			ft_isascii.c\
			ft_isprint.c\
			ft_tolower.c\
			ft_toupper.c\
			ft_atoi.c\
			ft_strncmp.c\
			ft_strnstr.c\
			ft_strchr.c\
			ft_memset.c\
			ft_bzero.c\
			ft_memcpy.c\
			ft_memccpy.c\
			ft_memchr.c\
			ft_memmove.c\
			ft_memcmp.c\
			ft_strrchr.c\
			ft_strlcpy.c\
			ft_strdup.c\
			ft_calloc.c\
			ft_strlcat.c\
			ft_substr.c\
			ft_strjoin.c\
			ft_strtrim.c\
			ft_split.c\
			ft_itoa.c\
			ft_strmapi.c\
			#ft_putchar_fd.c\
			#ft_putstr_fd.c\
			#ft_putendl_fd.c\
			#ft_putnbr_fd.c\
#-----------------------------TEST VARIABLES-----------------------------------#
DEV			=devmain.c
DEVOUT		=devout.o
#----------------------------MANDATORY COMMANDS--------------------------------#
all: $(NAME)
	@./$(OUT)

$(NAME):
	@gcc -Wall -Wextra -Werror $(MAIN) $(FUNCTIONS) -o $(OUT)

clean:
	@/bin/rm -f *.o

fclean: clean
	@/bin/rm -f $(NAME)

re: allclean all
#-----------------------------CUSTOM COMMANDS----------------------------------#
diff: $(NAME) dev
	@echo ./$(OUT) | bash > MAINOUT
	@echo ./$(DEVOUT) | bash > DEVOUT
	@diff MAINOUT DEVOUT

allclean: fclean
		@/bin/rm -f MAINOUT*
		@/bin/rm -f DEVOUT*
		@/bin/rm -f *.diff

dev:
	@gcc -Wall -Wextra -Werror $(DEV) -o $(DEVOUT)
	@./$(DEVOUT)

compare: $(NAME) dev
	@./$(OUT)
