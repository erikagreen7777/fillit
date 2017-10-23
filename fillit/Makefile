# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: egreen <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/10/11 15:32:56 by egreen            #+#    #+#              #
#    Updated: 2017/10/16 08:39:01 by egreen           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #
NAME = fillit
SRCDIR = ./srcs/
LIBDIR = ./libft/
FILE_1 = main valid mod ft_remove_newline check_20_new place_tets
FILE_2 = ft_split ft_list_assign ft_strndup check_4_new backtrack
FILE_3 = ft_trimdots ft_checktets dothashthing new_grid print_grid
FILE_4 = del_tet coord1 coord2
FILES = $(FILE_1) $(FILE_2) $(FILE_3) $(FILE_4)
HEADERS = libft.h fillit.h
SRCS = $(addprefix $(SRCDIR), $(patsubst %, %.c, $(FILES)))
OBJS = $(patsubst %, %.o, $(FILES))
FLAGS = -Wall -Werror -Wextra
LIB = -L$(LIBDIR) -lft

all: $(NAME)

$(OBJS): $(SRCS)
	@gcc $(FLAGS) -c $(SRCS) -g

$(NAME): $(OBJS) $(LIBDIR)
	@$(MAKE) -C $(LIBDIR)
	@gcc $(OBJS) $(LIB) -o $(NAME)

clean:
	@$(MAKE) clean -C $(LIBDIR)
	@rm -rf $(OBJS)

fclean:
	@$(MAKE) clean
	@$(MAKE) fclean -C $(LIBDIR)
	@rm -rf $(NAME)

re:
	@$(MAKE) fclean
	@$(MAKE) all
