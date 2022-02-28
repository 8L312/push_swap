# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rmonney <marvin@42lausanne.ch>             +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/12/22 14:59:57 by rmonney           #+#    #+#              #
#    Updated: 2022/01/20 22:00:37 by rmonney          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #
SRCS		= main.c verif_1arg.c verif_args.c stackwriter.c move1.c move2.c move3.c stack_check.c tools1.c tools2.c tools3.c tools4.c algo1.c algo2.c algofor5.c algo3.c algo4.c algo4_1.c algo5.c algo5_1.c

OBJS		= ${SRCS:.c=.o}

RM			= rm -f

NAME		= push_swap

FLAGS		= -Wall -Wextra -Werror

CC			= gcc

LIBFTPATH	= ./libft/

INCLUDEFT	= -I ${LIBFTPATH}

LFT			= -L ${LIBFTPATH} -lft

.c.o:
			${CC} ${FLAGS} -c $< -o ${<:.c=.o}

${NAME}:	${OBJS}
			make -C ${LIBFTPATH}
			${CC} ${FLAGS} ${INCLUDEFT} -o ${NAME} ${OBJS} ${LFT}

all:		${NAME}

clean:
			${RM} ${OBJS}

fclean:		clean
			${RM} ${NAME}

re:			fclean all

.PHONY:		all clean fclean re
