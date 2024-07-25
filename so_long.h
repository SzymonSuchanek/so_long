/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssuchane <ssuchane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/03 16:34:31 by ssuchane          #+#    #+#             */
/*   Updated: 2024/07/25 12:51:06 by ssuchane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SO_LONG_H
# define SO_LONG_H

# include "library/Libft/libft.h"
# include "library/ft_printf/ft_printf.h"
# include "library/minilibx/mlx.h"
# include <limits.h>
# include <stdbool.h>

typedef struct s_xpm
{
	void	*background;
	void	*wall;
	void	*collectible;
	void	*player_up;
	void	*player_down;
	void	*player_left;
	void	*player_right;
	void	*monster;
	void	*exit;
	void	*exit_open;
}			t_xpm;

typedef struct s_game
{
	char	**map;
	int		width;
	int		height;
	int		player_xy[2];
	int		exit_xy[2];
	int		**monster_xy;
	void	*mlx;
	void	*window;
	t_xpm	xpm;
}			t_game;

void		check_map(char **map);
void		are_uniques_on_map(char **map);
static int	check_uniques(char unique, int *player, int *exit,
				int *collectibles);
void		check_shape(char **map);
void		is_map_closed(char **map);
int			are_uniques_collected(char **map);
static void	flood_fill(char **map, int height, int y, int x);
void		are_uniques_reachable(char **map);

void		free_map(char **map);
void		error(char **map, char *msg);
int			map_width(char *map);
int			map_height(char **map);
int			are_collectibles_collected(char **map);

static char	*read_map(int fd);
char		**parse_map(char *path);
char		**duplicate_map(char **map);

void		get_position(char **map, int *player_xy, int *exit_xy);
void		init_textures(t_game *game);
void		fill_texture(t_game game, void *xpm, int x, int y);
void		fill_player_texture(t_game game, char key, int x, int y);
void		fill_textures(t_game game, char key);

void		start_game(t_game game);
void		move_player(t_game *game, int x_off, int y_off, char key);

void		display_moves(t_game *game, short moves);
int			close_game(t_game *game);
int			handle_key_events(int keycode, t_game *game);

#endif