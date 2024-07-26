/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   animation.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssuchane <ssuchane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/26 12:44:02 by ssuchane          #+#    #+#             */
/*   Updated: 2024/07/26 17:34:48 by ssuchane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

int	update_game(t_game *game)
{
	game->frame_counter++;
	if (game->frame_counter >= 70000)
	{
		game->state = (game->state + 1) % 4;
		game->frame_counter = 0;
		fill_textures(*game, game->last_key);
		display_moves(game);
	}
	return (0);
}
