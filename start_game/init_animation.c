/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_animation.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssuchane <ssuchane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/24 12:27:53 by ssuchane          #+#    #+#             */
/*   Updated: 2024/07/26 19:34:32 by ssuchane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

void	init_monster_textures(t_game *game)
{
	game->xpm.monster1 = mlx_xpm_file_to_image(game->mlx,
			"textures/monster1.xpm", &(game->width), &(game->height));
	game->xpm.monster2 = mlx_xpm_file_to_image(game->mlx,
			"textures/monster2.xpm", &(game->width), &(game->height));
	game->xpm.monster3 = mlx_xpm_file_to_image(game->mlx,
			"textures/monster3.xpm", &(game->width), &(game->height));
}

void	init_collectible_textures(t_game *game)
{
	game->xpm.collectible1 = mlx_xpm_file_to_image(game->mlx,
			"textures/collectible1.xpm", &(game->width), &(game->height));
	game->xpm.collectible2 = mlx_xpm_file_to_image(game->mlx,
			"textures/collectible2.xpm", &(game->width), &(game->height));
	game->xpm.collectible3 = mlx_xpm_file_to_image(game->mlx,
			"textures/collectible3.xpm", &(game->width), &(game->height));
	game->xpm.collectible4 = mlx_xpm_file_to_image(game->mlx,
			"textures/collectible4.xpm", &(game->width), &(game->height));
}

void	init_player_textures(t_game *game)
{
	game->xpm.player_up = mlx_xpm_file_to_image(game->mlx,
			"textures/player_up.xpm", &(game->width), &(game->height));
	game->xpm.player_down = mlx_xpm_file_to_image(game->mlx,
			"textures/player_down.xpm", &(game->width), &(game->height));
	game->xpm.player_left = mlx_xpm_file_to_image(game->mlx,
			"textures/player_left.xpm", &(game->width), &(game->height));
	game->xpm.player_right = mlx_xpm_file_to_image(game->mlx,
			"textures/player_right.xpm", &(game->width), &(game->height));
}

void	init_textures(t_game *game)
{
	init_monster_textures(game);
	init_collectible_textures(game);
	init_player_textures(game);
	game->xpm.background = mlx_xpm_file_to_image(game->mlx,
			"textures/background.xpm", &(game->width), &(game->height));
	game->xpm.wall = mlx_xpm_file_to_image(game->mlx, "textures/wall.xpm",
			&(game->width), &(game->height));
	game->xpm.exit = mlx_xpm_file_to_image(game->mlx, "textures/exit.xpm",
			&(game->width), &(game->height));
	game->xpm.exit_open = mlx_xpm_file_to_image(game->mlx,
			"textures/exit_open.xpm", &(game->width), &(game->height));
}
