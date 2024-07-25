/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_map.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssuchane <ssuchane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/24 12:16:52 by ssuchane          #+#    #+#             */
/*   Updated: 2024/07/25 12:42:20 by ssuchane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

void	check_map(char **map)
{
	check_shape(map);
	is_map_closed(map);
	are_uniques_on_map(map);
	are_uniques_reachable(map);
}
