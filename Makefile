# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jperrama <jperrama@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/01/11 10:54:49 by jperrama          #+#    #+#              #
#    Updated: 2023/01/14 19:59:31 by jperrama         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME        := push_swap
SRC_DIR     := src
BUILD_DIR   := .build
SRCS		:= 	\
			algorithm/sort_100_and_500.c \
			algorithm/sort_5_and_3.c \
			parsing/checking.c \
			parsing/init.c \
			main.c \
			instructions/move.c \
			utils/utils.c \
			free/free.c
SRCS		:= $(SRCS:%=$(SRC_DIR)/%)
OBJS		:= $(SRCS:$(SRC_DIR)/%.c=$(BUILD_DIR)/%.o)
DEPS		:= $(OBJS:.o=.d)

CC			:= cc
CFLAGS		:= -Wall -Wextra -Werror -g
CPPFLAGS	:= -MMD -MP -I include
RM			:= rm -f
MAKEFLAGS	+= --no-print-directory
DIR_DUP		= mkdir -p $(@D)
LIBRARIES	:= -L libft -lft
INCLUDES	:= -Ilibft/include

all: $(NAME)

$(NAME): $(OBJS)
	make -C libft
	$(CC) $(OBJS) $(LIBRARIES) -o $(NAME) -L./ -lft
	$(info CREATED $@)

$(BUILD_DIR)/%.o: $(SRC_DIR)/%.c
	$(DIR_DUP)
	$(CC) $(CFLAGS) $(CPPFLAGS) $(INCLUDES) -c $< -o $@
	$(info CREATED $@)

-include $(DEPS)

clean:
	$(RM) $(OBJS) $(DEPS)

fclean: clean
	$(RM) $(NAME)

re:
	$(MAKE) fclean
	$(MAKE) all

.PHONY: clean fclean re
.SILENT:
