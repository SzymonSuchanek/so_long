/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_shape.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssuchane <ssuchane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/24 12:12:08 by ssuchane          #+#    #+#             */
/*   Updated: 2024/07/25 12:42:22 by ssuchane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

void	check_shape(char **map)
{
	int	len;
	int	i;

	i = 0;
	len = map_width(map[i]);
	while (++i, map[i])
		if (map_width(map[i]) != len)
			error(map, "Map's shape must be of rectangle.");
}
