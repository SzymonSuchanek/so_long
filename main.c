/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssuchane <ssuchane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/01 16:07:12 by ssuchane          #+#    #+#             */
/*   Updated: 2024/07/24 12:30:40 by ssuchane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	main(int ac, char **av)
{
	t_game	game;

	if (ac != 2)
		error(NULL, "Attach just one map.");
	game.map = parse_map(av[1]);
	check_map(game.map);
	start_game(game);
	free(game.map);
	return (0);
}
