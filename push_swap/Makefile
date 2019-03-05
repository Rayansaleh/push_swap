# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rsaleh <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/01/23 19:11:02 by rsaleh            #+#    #+#              #
#    Updated: 2019/03/05 12:54:31 by rsaleh           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CFLAGS	=	-Wall -Wextra -Werror
NAME	=	push_swap
NAMEC	=	checker
OBJDIR	=	obj/
SRCDIR	=	srcs/
FILES	=	ops.c \
			pushswap.c \
			sort.c \
			other_sort.c
FILESC	=	checker.c \
			other_sort.c \
			sort.c \
			ops.c \
			ops_check.c \
			add_remove.c \
			../Get_Next_Line/get_next_line.c
INCLUDE =	includes/
SRC		=	$(addprefix $(SRCDIR), $(FILES))
SRCC	=	$(addprefix $(SRCDIR), $(FILESC))
OBJ		=	$(addprefix $(OBJDIR), $(patsubst %.c, %.o, $(notdir $(FILES))))

VPATH	= 	$(shell find $(SRCDIR) -type d)

all: $(NAME)

$(NAME): $(OBJ)
	@make -C libft/
	@gcc $(CFLAGS) -o $(NAME) $(SRC) libft/libft.a
	@gcc $(CFLAGS) -o $(NAMEC) $(SRCC) libft/libft.a
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
	@rm -rf $(NAMEC)

re: fclean all
