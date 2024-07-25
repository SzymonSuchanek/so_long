/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   are_uniques_on_map.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssuchane <ssuchane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/24 12:16:16 by ssuchane          #+#    #+#             */
/*   Updated: 2024/07/25 12:42:14 by ssuchane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

static int	check_uniques(char unique, int *player, int *exit,
		int *collectibles)
{
	if (unique == 'P')
		(*player)++;
	else if (unique == 'E')
		(*exit)++;
	else if (unique == 'C')
		(*collectibles)++;
	else if (unique != '0' && unique != '1' && unique != 'M')
		return (0);
	return (1);
}

void	are_uniques_on_map(char **map)
{
	int	player;
	int	exit;
	int	collectibles;
	int	i;
	int	j;

	player = 0;
	exit = 0;
	collectibles = 0;
	i = -1;
	while (++i, map[i])
	{
		j = -1;
		while (++j, map[i][j])
			if (!check_uniques(map[i][j], &player, &exit, &collectibles))
				error(map, "Map doesn't have all uniques to be loaded.");
	}
	if (player != 1)
		error(map, "There must be exactly 1 player on the map.");
	if (exit != 1)
		error(map, "There must be exactly 1 exit on the map.");
	if (collectibles < 1)
		error(map, "There must be at least 1 collectible on the map.");
}
