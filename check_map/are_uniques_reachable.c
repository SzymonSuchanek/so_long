/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   are_uniques_reachable.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssuchane <ssuchane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/24 12:21:31 by ssuchane          #+#    #+#             */
/*   Updated: 2024/07/25 12:50:43 by ssuchane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

int	are_uniques_collected(char **map)
{
	int	i;
	int	j;

	i = -1;
	while (++i, map[i])
	{
		j = -1;
		while (++j, map[i][j])
			if (map[i][j] == 'C' || map[i][j] == 'E')
				return (0);
	}
	return (1);
}

static void	flood_fill(char **map, int height, int y, int x)
{
	int	width;

	width = map_width(map[0]);
	if (y < 0 || y >= height || x < 0 || x >= width || map[y][x] == '1'
		|| map[y][x] == 'V' || map[y][x] == 'M')
		return ;
	map[y][x] = 'V';
	flood_fill(map, height, y - 1, x);
	flood_fill(map, height, y + 1, x);
	flood_fill(map, height, y, x - 1);
	flood_fill(map, height, y, x + 1);
}

void	are_uniques_reachable(char **map)
{
	char	**map_dup;
	int		player_xy[2];
	int		height;

	height = map_height(map);
	map_dup = duplicate_map(map);
	if (!map_dup)
		error(map, "Can't copy map.");
	get_position(map_dup, player_xy, NULL);
	flood_fill(map_dup, height, player_xy[0], player_xy[1]);
	if (!are_uniques_collected(map_dup))
	{
		free_map(map_dup);
		error(map, "Can't finish map.");
	}
	free_map(map_dup);
}
