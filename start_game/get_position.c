/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_position.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssuchane <ssuchane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/24 12:23:50 by ssuchane          #+#    #+#             */
/*   Updated: 2024/07/25 12:41:51 by ssuchane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

void	get_position(char **map, int *player_xy, int *exit_xy)
{
	int	i;
	int	j;

	i = -1;
	while (++i, map[i])
	{
		j = -1;
		while (++j, map[i][j])
		{
			if (map[i][j] == 'P' && player_xy)
			{
				player_xy[0] = i;
				player_xy[1] = j;
			}
			if (map[i][j] == 'E' && exit_xy)
			{
				exit_xy[0] = i;
				exit_xy[1] = j;
			}
		}
	}
}
