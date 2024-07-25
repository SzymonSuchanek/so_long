/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utlis.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssuchane <ssuchane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/24 12:07:09 by ssuchane          #+#    #+#             */
/*   Updated: 2024/07/24 12:18:13 by ssuchane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	free_map(char **map)
{
	int	i;

	i = -1;
	while (++i, map[i])
		free(map[i]);
	free(map);
}

void	error(char **map, char *msg)
{
	ft_printf("Error\n");
	ft_printf("%s\n", msg);
	if (map && map[0])
		free_map(map);
	exit(1);
}

int	map_width(char *map)
{
	int	i;

	i = 0;
	while (map[i] != '\n' && map[i] != '\0')
		i++;
	return (i);
}

int	map_height(char **map)
{
	int	i;

	i = 0;
	while (map[i])
		i++;
	return (i);
}

int	are_collectibles_collected(char **map)
{
	int	i;
	int	j;

	i = -1;
	while (++i, map[i])
	{
		j = -1;
		while (++j, map[i][j])
			if (map[i][j] == 'C')
				return (0);
	}
	return (1);
}
