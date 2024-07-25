/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handling.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssuchane <ssuchane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/24 12:31:16 by ssuchane          #+#    #+#             */
/*   Updated: 2024/07/25 12:42:01 by ssuchane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

void	display_moves(t_game *game, short moves)
{
	char	*str;

	str = ft_itoa(moves);
	mlx_string_put(game->mlx, game->window, 10, 20, 0xFFFFFFFF, "Moves: ");
	mlx_string_put(game->mlx, game->window, 70, 20, 0xFFFFFFFF, str);
	if (moves == 1)
		printf("You used %s move.\n", str);
	else
		printf("You used %s moves.\n", str);
	free(str);
}

int	close_game(t_game *game)
{
	mlx_destroy_image(game->mlx, game->xpm.background);
	mlx_destroy_image(game->mlx, game->xpm.wall);
	mlx_destroy_image(game->mlx, game->xpm.collectible);
	mlx_destroy_image(game->mlx, game->xpm.player_up);
	mlx_destroy_image(game->mlx, game->xpm.player_down);
	mlx_destroy_image(game->mlx, game->xpm.player_left);
	mlx_destroy_image(game->mlx, game->xpm.player_right);
	mlx_destroy_image(game->mlx, game->xpm.monster);
	mlx_destroy_image(game->mlx, game->xpm.exit);
	mlx_destroy_image(game->mlx, game->xpm.exit_open);
	mlx_destroy_window(game->mlx, game->window);
	mlx_destroy_display(game->mlx);
	free(game->mlx);
	free_map(game->map);
	exit(0);
}

int	handle_key_events(int keycode, t_game *game)
{
	if (keycode == 119 || keycode == 65362)
		move_player(game, -1, 0, 'w');
	if (keycode == 115 || keycode == 65364)
		move_player(game, 1, 0, 's');
	if (keycode == 97 || keycode == 65361)
		move_player(game, 0, -1, 'a');
	if (keycode == 100 || keycode == 65363)
		move_player(game, 0, 1, 'd');
	if (keycode == 65307)
		close_game(game);
	return (0);
}
