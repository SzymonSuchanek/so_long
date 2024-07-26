/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   start_game.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssuchane <ssuchane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/24 12:29:23 by ssuchane          #+#    #+#             */
/*   Updated: 2024/07/26 17:37:01 by ssuchane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

void	start_game(t_game game)
{
	game.mlx = mlx_init();
	game.width = map_width(game.map[0]);
	game.height = map_height(game.map);
	game.window = mlx_new_window(game.mlx, game.width * 50, game.height * 50,
			"so_long");
	get_position(game.map, game.player_xy, game.exit_xy);
	init_textures(&game);
	game.frame_counter = 0;
	game.state = 0;
	game.last_key = 'w';
	game.moves = 0;
	fill_textures(game, 'w');
	mlx_hook(game.window, 17, 0, close_game, &game);
	mlx_key_hook(game.window, handle_key_events, &game);
	mlx_loop_hook(game.mlx, update_game, &game);
	mlx_loop(game.mlx);
}

void	move_player(t_game *game, char key)
{
	static int	moves;
	int			x;
	int			y;

	x = game->player_xy[0] + game->x_off;
	y = game->player_xy[1] + game->y_off;
	if (game->map[x][y] == '1')
		return ;
	if (game->map[x][y] == 'M')
		close_game(game);
	game->moves++;
	if (game->map)
		game->map[x][y] = 'P';
	if (x == game->exit_xy[0] && y == game->exit_xy[1])
		if (are_uniques_collected(game->map))
			close_game(game);
	if (game->player_xy[0] == game->exit_xy[0]
		&& game->player_xy[1] == game->exit_xy[1])
		game->map[game->player_xy[0]][game->player_xy[1]] = 'E';
	else
		game->map[game->player_xy[0]][game->player_xy[1]] = '0';
	game->player_xy[0] = x;
	game->player_xy[1] = y;
	fill_textures(*game, key);
	display_moves(game);
}
