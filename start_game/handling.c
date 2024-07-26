/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handling.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssuchane <ssuchane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/24 12:31:16 by ssuchane          #+#    #+#             */
/*   Updated: 2024/07/26 17:45:41 by ssuchane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

void	display_moves(t_game *game)
{
	char	*str;

	str = ft_itoa(game->moves);
	mlx_string_put(game->mlx, game->window, 10, 20, 0xFFFFFFFF, "Moves: ");
	mlx_string_put(game->mlx, game->window, 70, 20, 0xFFFFFFFF, str);
	free(str);
}

int	close_game(t_game *game)
{
	mlx_destroy_image(game->mlx, game->xpm.background);
	mlx_destroy_image(game->mlx, game->xpm.wall);
	mlx_destroy_image(game->mlx, game->xpm.collectible1);
	mlx_destroy_image(game->mlx, game->xpm.collectible2);
	mlx_destroy_image(game->mlx, game->xpm.collectible3);
	mlx_destroy_image(game->mlx, game->xpm.collectible4);
	mlx_destroy_image(game->mlx, game->xpm.player_up);
	mlx_destroy_image(game->mlx, game->xpm.player_down);
	mlx_destroy_image(game->mlx, game->xpm.player_left);
	mlx_destroy_image(game->mlx, game->xpm.player_right);
	mlx_destroy_image(game->mlx, game->xpm.monster1);
	mlx_destroy_image(game->mlx, game->xpm.monster2);
	mlx_destroy_image(game->mlx, game->xpm.monster3);
	mlx_destroy_image(game->mlx, game->xpm.exit);
	mlx_destroy_image(game->mlx, game->xpm.exit_open);
	mlx_destroy_window(game->mlx, game->window);
	mlx_destroy_display(game->mlx);
	free(game->mlx);
	free_map(game->map);
	exit(0);
}

void	process_key_event(t_game *game, int x_off, int y_off, char key)
{
	game->x_off = x_off;
	game->y_off = y_off;
	game->last_key = key;
	move_player(game, key);
}

int	handle_key_events(int keycode, t_game *game)
{
	if (keycode == 119 || keycode == 65362)
		process_key_event(game, -1, 0, 'w');
	else if (keycode == 115 || keycode == 65364)
		process_key_event(game, 1, 0, 's');
	else if (keycode == 97 || keycode == 65361)
		process_key_event(game, 0, -1, 'a');
	else if (keycode == 100 || keycode == 65363)
		process_key_event(game, 0, 1, 'd');
	else if (keycode == 65307)
		close_game(game);
	return (0);
}
