# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ssuchane <ssuchane@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/07/03 15:54:07 by ssuchane          #+#    #+#              #
#    Updated: 2024/07/03 16:31:09 by ssuchane         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

MAKEFLAGS += -s
NAME = so_long
CC = cc
FLAGS = -Wall -Wextra -Werror
RM = rm -f

# UTILS = 
SRCS = parse_map.c
OBJS = $(SRCS:.c=.o)

LIBRARY_DIRS = library/Libft library/ft_printf library/minilibx
LIBRARY = ft ftprintf mlx Xext X11
LDFLAGS_LIBS = $(addprefix -L, $(LIBRARY_DIRS)) $(addprefix -l, $(LIBRARY))

MINILIBX_REPO = https://github.com/42Paris/minilibx-linux.git
MINILIBX_DIR = library/minilibx

all: $(MINILIBX_DIR) $(LIBRARY) $(NAME)

$(MINILIBX_DIR):
	@if [ ! -d "$(MINILIBX_DIR)" ]; then \
		git clone $(MINILIBX_REPO) $(MINILIBX_DIR); \
	fi

$(LIBRARY):
	$(foreach dir, $(LIBRARY_DIRS), make -C $(dir);)

$(NAME): $(OBJS)
	$(CC) $(FLAGS) $(OBJS) $(LDFLAGS_LIBS) -o $@
	$(MAKE) clean

clean:
	$(RM) $(OBJS)
	$(foreach dir, $(LIBRARY_DIRS), $(RM) $(dir)/*.a)

fclean: clean
	$(RM) $(NAME)

.PHONY: all clean fclean re $(MINILIBX_DIR)