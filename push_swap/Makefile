# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rsaleh <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/01/23 19:11:02 by rsaleh            #+#    #+#              #
#    Updated: 2019/02/27 16:50:28 by rsaleh           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CFLAGS	=	-Wall -Wextra -Werror
NAME	=	push_swap
OBJDIR	=	obj/
SRCDIR	=	srcs/
FILES	=	ops.c \
			pushswap.c \
			sort.c \
			other_sort.c
INCLUDE =	includes/
SRC		=	$(addprefix $(SRCDIR), $(FILES))
OBJ		=	$(addprefix $(OBJDIR), $(patsubst %.c, %.o, $(notdir $(FILES))))

VPATH	= 	$(shell find $(SRCDIR) -type d)

all: $(NAME)

$(NAME): $(OBJ)
	@make -C libft/
	@gcc $(CFLAGS) -o $(NAME) $(SRC) libft/libft.a
	@printf "$@ has been created\n"

$(OBJDIR)%.o: $(SRCDIR)%.c
	@mkdir -p $(OBJDIR)
	@gcc -o $@ -c $< $(CFLAGS) -I $(INCLUDE)

clean:
	@make clean -C libft/
	@rm -rf $(OBJDIR)

fclean: clean
	@make fclean -C libft/
	@rm -rf $(NAME)

re: fclean all
