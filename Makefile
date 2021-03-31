# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: alafranc <alafranc@student.42lyon.fr>      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/03/23 14:11:52 by alafranc          #+#    #+#              #
#    Updated: 2021/03/31 15:26:14 by alafranc         ###   ########lyon.fr    #
#                                                                              #
# **************************************************************************** #

PUSH			= push_swap

CHECKER			= checker

FILES_GENERAL	= display.c display_utility.c parse_number.c ft_error.c ft_garbage_collector.c\
					$(addprefix instructions/, push.c reverse.c rotate.c swap.c) \
					ft_tmp.c 
FILES_PUSH		= push_swap.c main.c
FILES_CHECK		= main.c checker.c

GEN_PATH		= general/
PUSH_PATH		= push_swap/
CHECK_PATH		= checker/
INC_FILES		= push_swap.h general.h checker.h
INC_PATH		= ./includes/
INC				= $(addprefix ${INC_PATH}, ${INC_FILES})

SRC_PATH		= ./srcs/
SRC				= $(addprefix ${SRC_PATH}, $(addprefix ${PUSH_PATH}, ${FILES_PUSH}) $(addprefix ${GEN_PATH}, ${FILES_GENERAL}))
SRC_2			= $(addprefix ${SRC_PATH}, $(addprefix ${CHECK_PATH}, ${FILES_CHECK}) $(addprefix ${GEN_PATH}, ${FILES_GENERAL}))

CC				= clang
OBJS 			= ${SRC:.c=.o}
OBJS_2 			= ${SRC_2:.c=.o}
FLAGS			= #-fsanitize=address -g3

#LIBRARY
NAME_LIBFT 		= libft.a
LIBFT_PATH 		= libft/
LIBFT			= $(addprefix ${LIBFT_PATH}, ${NAME_LIBFT})

all: 			${PUSH}	

lib: 
				make -C ${LIBFT_PATH}
				cp ${LIBFT} .

%.o: %.c 		${INC}
				${CC} ${FLAGS} -c $< -o $@ -I ${INC_PATH}

${PUSH}: 		lib ${OBJS} ${OBJS_2}
				${CC} ${FLAGS} ${OBJS} -o ${PUSH} ${NAME_LIBFT} -I ${INC_PATH}
				${CC} ${FLAGS} ${OBJS_2} -o ${CHECKER} ${NAME_LIBFT} -I ${INC_PATH}

clean:
				make -C ${LIBFT_PATH} clean
				${RM} ${OBJS} ${OBJS_2}

fclean:			clean
				${RM} ${PUSH}
				${RM} ${CHECKER}
				${RM} ${LIBFT}
				${RM} ${NAME_LIBFT}
re:				fclean all


.PHONY: all clean fclean re bonus lib