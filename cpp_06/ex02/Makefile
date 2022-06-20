# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cmarteau <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/05/27 14:23:42 by cmarteau          #+#    #+#              #
#    Updated: 2022/06/07 20:59:15 by cmarteau         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS	=	./main.cpp\
			./Base.cpp

OBJS	=	${SRCS:.c=.o}

CXX		=	c++

CFLAGS	=	-Wall -Werror -Wextra -std=c++98 

NAME	=	Base

.c		:	.o
		${CXX} ${CFLAGS} -c $< -o ${<:.c=.o}

${NAME}	:	${OBJS}
		${CXX} ${CFLAGS} ${OBJS} -o ${NAME}

all		:	${NAME}

clean	:

fclean	:	clean
			rm -rf ${NAME}
			$(MAKE) -C . clean

re	:	fclean all

.PHONY	:	all clean fclean re

