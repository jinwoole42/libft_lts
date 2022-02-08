# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jinwoole <indibooks@naver.com>             +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/22 14:55:05 by jinwoole          #+#    #+#              #
#    Updated: 2022/02/08 13:06:03 by jinwoole         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

AR		=	ar rcs
RM		=	rm -f
CC		=	gcc
CFLAGS	=	-Wall -Werror -Wextra

NAME	=	libft.a
FT_DIR	=	./libft_srcs/

SRCS	=	$(FT_DIR)ft_isalpha.c \
			$(FT_DIR)ft_isdigit.c \
			$(FT_DIR)ft_isalnum.c \
			$(FT_DIR)ft_isascii.c \
			$(FT_DIR)ft_isprint.c \
			$(FT_DIR)ft_strlen.c \
			$(FT_DIR)ft_toupper.c \
			$(FT_DIR)ft_tolower.c \
			$(FT_DIR)ft_atoi.c \
			$(FT_DIR)ft_strncmp.c \
			$(FT_DIR)ft_strlcat.c \
			$(FT_DIR)ft_strlcpy.c \
			$(FT_DIR)ft_memset.c \
			$(FT_DIR)ft_memcpy.c \
			$(FT_DIR)ft_memchr.c \
			$(FT_DIR)ft_memcmp.c \
			$(FT_DIR)ft_bzero.c \
			$(FT_DIR)ft_strnstr.c \
			$(FT_DIR)ft_strchr.c \
			$(FT_DIR)ft_strrchr.c \
			$(FT_DIR)ft_memmove.c \
			$(FT_DIR)ft_calloc.c \
			$(FT_DIR)ft_strdup.c \
			$(FT_DIR)ft_substr.c \
			$(FT_DIR)ft_strjoin.c \
			$(FT_DIR)ft_strtrim.c \
			$(FT_DIR)ft_split.c \
			$(FT_DIR)ft_itoa.c \
			$(FT_DIR)ft_strmapi.c \
			$(FT_DIR)ft_striteri.c \
			$(FT_DIR)ft_putchar_fd.c \
			$(FT_DIR)ft_putstr_fd.c \
			$(FT_DIR)ft_putendl_fd.c \
			$(FT_DIR)ft_putnbr_fd.c \
			$(FT_DIR)ft_lstnew.c \
			$(FT_DIR)ft_lstadd_front.c \
			$(FT_DIR)ft_lstsize.c \
			$(FT_DIR)ft_lstlast.c \
			$(FT_DIR)ft_lstadd_back.c \
			$(FT_DIR)ft_lstdelone.c \
			$(FT_DIR)ft_lstclear.c \
			$(FT_DIR)ft_lstiter.c \
			$(FT_DIR)ft_lstmap.c


OBJS = $(SRCS:%.c=%.o) #$(SRCS_GNL:.c=.o) $(SRCS_PRINTF:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(AR) $(NAME) $(OBJS)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re