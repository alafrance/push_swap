# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: alafranc <alafranc@student.42lyon.fr>      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/03/23 14:11:52 by alafranc          #+#    #+#              #
#    Updated: 2021/03/26 20:04:45 by alafranc         ###   ########lyon.fr    #
#                                                                              #
# **************************************************************************** #

NAME			= push_swap
FILES			= main.c push_swap.c display.c display_utility.c parse_number.c \
				ft_error.c \
				$(addprefix instructions/, push.c rotate.c swap.c reverse.c)
INC_FILES		= push_swap.h
INC_PATH		= ./includes/
INC				= $(addprefix ${INC_PATH}, ${INC_FILES})
SRC_PATH		= ./srcs/
SRC				= $(addprefix ${SRC_PATH}, ${FILES})

CC				= clang
OBJS 			= ${SRC:.c=.o}
FLAGS			= #-Wall -Wextra -Werror

#LIBRARY
NAME_LIBFT 		= libft.a
LIBFT_PATH 		= libft/
LIBFT			= $(addprefix ${LIBFT_PATH}, ${NAME_LIBFT})

all: 			${NAME}	

lib: 
				make -C ${LIBFT_PATH}
				cp ${LIBFT} .

%.o: %.c 		${INC}
				${CC} ${FLAGS} -c $< -o $@ -I ${INC_PATH}

${NAME}: 		lib ${OBJS}
				${CC} ${FLAGS} ${OBJS} -o ${NAME} ${NAME_LIBFT} -I ${INC_PATH}

clean:
				make -C ${LIBFT_PATH} clean
				${RM} ${OBJS} ${OBJS_BONUS}

fclean:			clean
				${RM} ${NAME}
				${RM} ${LIBFT}
				${RM} ${NAME_LIBFT}
re:				fclean all


.PHONY: all clean fclean re bonus lib