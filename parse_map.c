/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_map.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssuchane <ssuchane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/24 12:17:46 by ssuchane          #+#    #+#             */
/*   Updated: 2024/07/24 12:22:47 by ssuchane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

static char	*read_map(int fd)
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

char	**duplicate_map(char **map)
{
	char	**map_dup;
	int		height;
	int		i;

	height = map_height(map);
	map_dup = malloc(sizeof(char *) * (height + 1));
	if (!map_dup)
		return (NULL);
	map_dup[height] = NULL;
	i = -1;
	while (++i, map[i])
	{
		map_dup[i] = ft_strdup(map[i]);
		if (!map_dup[i])
		{
			free_map(map_dup);
			return (NULL);
		}
	}
	return (map_dup);
}
