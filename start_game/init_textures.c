/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_textures.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssuchane <ssuchane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/24 12:27:53 by ssuchane          #+#    #+#             */
/*   Updated: 2024/07/25 12:42:04 by ssuchane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

void	init_textures(t_game *game)
{
	game->xpm.background = mlx_xpm_file_to_image(game->mlx,
			"textures/background.xpm", &(game->width), &(game->height));
	game->xpm.wall = mlx_xpm_file_to_image(game->mlx,
			"textures/wall.xpm", &(game->width), &(game->height));
	game->xpm.collectible = mlx_xpm_file_to_image(game->mlx,
			"textures/collectible.xpm", &(game->width), &(game->height));
	game->xpm.player_up = mlx_xpm_file_to_image(game->mlx,
			"textures/player_up.xpm", &(game->width), &(game->height));
	game->xpm.player_down = mlx_xpm_file_to_image(game->mlx,
			"textures/player_down.xpm", &(game->width), &(game->height));
	game->xpm.player_left = mlx_xpm_file_to_image(game->mlx,
			"textures/player_left.xpm", &(game->width), &(game->height));
	game->xpm.player_right = mlx_xpm_file_to_image(game->mlx,
			"textures/player_right.xpm", &(game->width), &(game->height));
	game->xpm.monster = mlx_xpm_file_to_image(game->mlx,
			"textures/monster.xpm", &(game->width), &(game->height));
	game->xpm.exit = mlx_xpm_file_to_image(game->mlx,
			"textures/exit.xpm", &(game->width), &(game->height));
	game->xpm.exit_open = mlx_xpm_file_to_image(game->mlx,
			"textures/exit_open.xpm", &(game->width), &(game->height));
}

void	fill_texture(t_game game, void *xpm, int x, int y)
{
	mlx_put_image_to_window(game.mlx, game.window, xpm, x, y);
}

void	fill_player_texture(t_game game, char key, int x, int y)
{
	if (key == 'w')
		fill_texture(game, game.xpm.player_up, x, y);
	if (key == 's')
		fill_texture(game, game.xpm.player_down, x, y);
	if (key == 'a')
		fill_texture(game, game.xpm.player_left, x, y);
	if (key == 'd')
		fill_texture(game, game.xpm.player_right, x, y);
}

void	fill_textures(t_game game, char key)
{
	int	i;
	int	j;

	i = -1;
	while (++i, game.map[i])
	{
		j = -1;
		while (++j, game.map[i][j])
		{
			if (game.map[i][j] == '0')
				fill_texture(game, game.xpm.background, j * 50, i * 50);
			if (game.map[i][j] == '1')
				fill_texture(game, game.xpm.wall, j * 50, i * 50);
			if (game.map[i][j] == 'C')
				fill_texture(game, game.xpm.collectible, j * 50, i * 50);
			if (game.map[i][j] == 'P')
				fill_player_texture(game, key, j * 50, i * 50);
			if (game.map[i][j] == 'M')
				fill_texture(game, game.xpm.monster, j * 50, i * 50);
			if (game.map[i][j] == 'E' && are_collectibles_collected(game.map))
				fill_texture(game, game.xpm.exit_open, j * 50, i * 50);
			else if (game.map[i][j] == 'E')
				fill_texture(game, game.xpm.exit, j * 50, i * 50);
		}
	}
}
