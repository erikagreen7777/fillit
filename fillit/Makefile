# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: egreen <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/10/11 15:32:56 by egreen            #+#    #+#              #
#    Updated: 2017/10/11 16:24:57 by egreen           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #
NAME = fillit
SRCDIR = ./srcs/
LIBDIR = ./libft/
FILE_1 = main valid mod
# FILE_2 = row_adjust save_tets del_list clear_tets find_pos 
# FILE_3 = insert_newlines tet_reset replace backtrack check_pos clean_map
# FILE_4 = next_piece map_reset
FILES = $(FILE_1) 
# $(FILE_2) $(FILE_3) $(FILE_4)
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