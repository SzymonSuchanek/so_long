/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_map_closed.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssuchane <ssuchane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/24 12:15:18 by ssuchane          #+#    #+#             */
/*   Updated: 2024/07/25 12:42:24 by ssuchane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

void	is_map_closed(char **map)
{
	int	i;
	int	j;
	int	width;
	int	height;

	i = -1;
	width = map_width(map[0]) - 1;
	height = map_height(map) - 1;
	while (++i, map[i])
	{
		j = -1;
		while (++j, map[i][j])
			if (i == 0 || i == height || j == 0 || j == width)
				if (map[i][j] != '1')
					error(map, "Map not closed off with walls.");
	}
}
