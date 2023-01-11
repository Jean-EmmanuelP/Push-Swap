# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jperrama <jperrama@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/01/11 10:54:49 by jperrama          #+#    #+#              #
#    Updated: 2023/01/11 11:42:24 by jperrama         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME        := libft.a
SRC_DIR     := src
BUILD_DIR   := .build
SRCS		:= 	\
			bool/ft_isalpha.c \
			bool/ft_isdigit.c \
			bool/ft_isascii.c \
			bool/ft_isalnum.c \
			ctypes/ft_touplow.c \
			stdlib/ft_atoi.c	\
			stdlib/ft_calloc.c \
			stdlib/ft_strdup.c \
			strings/ft_memchr.c \
			strings/ft_memccpy.c \
			strings/ft_memcpy.c \
			strings/ft_memcmp.c \
			strings/ft_strchr.c \
			strings/ft_putchar_fd.c \
			strings/ft_putendl_fd.c \
			strings/ft_putnbr_fd.c \
			strings/ft_putstr_fd.c \
			strings/ft_itoa.c \
			strings/ft_strlcat.c \
			strings/ft_strlcpy.c \
			strings/ft_strlen.c \
			strings/ft_strncmp.c \
			strings/ft_strnstr.c \
			strings/ft_strrchr.c \
			strings/ft_split.c \
			strings/ft_striteri.c \
			strings/ft_strjoin.c \
			strings/ft_strmapi.c\
			strings/ft_strnstr.c\
			strings/ft_strrchr.c\
			strings/ft_substr.c\
			strings/ft_strtrim.c \
			strings/ft_substr.c \
			lst/ft_lstnew.c \
			lst/ft_lstsize.c \
			lst/ft_lstadd_back.c \
			lst/ft_lstadd_front.c \
			lst/ft_lstlast.c \
			lst/ft_lstdelone.c \
			lst/ft_lstclear.c

SRCS		:= $(SRCS:%=$(SRC_DIR)/%)
OBJS		:= $(SRCS:$(SRC_DIR)/%.c=$(BUILD_DIR)/%.o)
DEPS		:= $(OBJS:.o=.d)

CC			:= cc
CFLAGS		:= -Wall -Wextra -Werror
CPPFLAGS	:= -MMD -MP -I include
AR			:= ar
ARFLAGS		:= -r -c -s
RM			:= rm -f
MAKEFLAGS	+= --no-print-directory
DIR_DUP		= mkdir -p $(@D)

all: $(NAME)

$(NAME): $(OBJS)
	$(AR) $(ARFLAGS) $(NAME) $(OBJS)
	$(info CREATED $@)

$(BUILD_DIR)/%.o: $(SRC_DIR)/%.c
	$(DIR_DUP)
	$(CC) $(CFLAGS) $(CPPFLAGS) -c $< -o $@
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

