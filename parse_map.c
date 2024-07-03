/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_map.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssuchane <ssuchane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/01 16:07:12 by ssuchane          #+#    #+#             */
/*   Updated: 2024/07/03 17:17:25 by ssuchane         ###   ########.fr       */
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

char	*read_map(int fd)
{
	char	*str;
	char	*temp;
	char	*line;

	str = get_next_line(fd);

	if (!str)
		error(NULL, "Map missing.");
	line = get_next_line(fd);
	while (line)
	{
		temp = str;
		str = ft_strjoin(temp, line);
		free(line);
		free(temp);
		line = get_next_line(fd);
	}
	return (str);
}

char	**parse_map(char *path)
{
	int		fd;
	char	*map_line;
	char	**map;

	fd = open(path, O_RDONLY);
	map_line = read_map(fd);
	map = ft_split(map_line, '\n');
	free(map_line);
	return (map);
}

int	width(char *line)
{
	int	i;

	i = 0;
	while (line[i] != '\n' && line[i] != '\0')
		i++;
	return (i);
}

void	check_shape(char **map)
{
	int	len;
	int	i;

	i = 0;
	len = width(map[i]);
	while (++i, map[i])
		if (width(map[i]) != len)
			error(map, "Map's shape must be of rectangle.")
}

void	check_map(char **map)
{
	check_shape(map);
	is_map_closed(map);
	are_uniques_on_map(map);
	are_uniques_reachable(map);
}

// int	are_uniques_on_map(int fd)
// {
// 	char	*line;
// 	int		ascii[255];
// 	int		i;

// 	fd = open("map.ber", O_RDONLY);
// 	line = get_next_line(fd);
// 	i = 0;
// 	while (i < 255)
// 	{
// 		ascii[i] = 0;
// 		i++;
// 	}
// 	while (line != NULL)
// 	{
// 		i = 0;
// 		while (line[i] != '\0')
// 		{
// 			if (line[i] == 'P')
// 				ascii['P']++;
// 			if (line[i] == 'E')
// 				ascii['E']++;
// 			if (line[i] == 'C')
// 				ascii['C']++;
// 			i++;
// 		}
// 		free(line);
// 		line = get_next_line(fd);
// 	}
// 	if (ascii['P'] != 1 || ascii['E'] != 1)
// 		return (1);
// 	if (ascii['C'] < 1)
// 		return (1);
// 	return (0);
// }

int	main(int ac, char **av)
{
	t_map	game;

	if (ac != 2)
		error(NULL, "Attach just one map.");
	game.map = parse_map(av[1]);
	check_map(game.map);

	return (0);
}
