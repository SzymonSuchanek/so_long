/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read_map.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssuchane <ssuchane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/01 16:07:12 by ssuchane          #+#    #+#             */
/*   Updated: 2024/07/02 18:35:09 by ssuchane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Libft/libft.h"
#include "so_long.h"

char	*ft_strchr(const char *s, int c)
{
	unsigned int	i;

	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == (char)c)
			return ((char *)&s[i]);
		i++;
	}
	if (c == '\0')
		return ((char *)&s[i]);
	return (0);
}

size_t	ft_strlen(const char *s)
{
	int	i;

	if (!s)
		return (0);
	i = 0;
	while (*s++)
		i++;
	return (i);
}

char	*ft_strdup(const char *s)
{
	const char		*ptr;
	char			*ptr2;
	unsigned int	i;

	ptr = s;
	i = 0;
	ptr2 = (char *)malloc(sizeof(char) * ft_strlen(s) + 1);
	if (!ptr2)
		return (NULL);
	while (ptr[i] != '\0')
	{
		ptr2[i] = ptr[i];
		i++;
	}
	ptr2[i] = '\0';
	return (ptr2);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		i;
	int		j;
	char	*str;

	if (!s1)
		return (ft_strdup(s2));
	i = 0;
	j = 0;
	str = (char *)malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (!str)
		return (NULL);
	while (s1[i] != '\0')
	{
		str[i] = s1[i];
		i++;
	}
	while (s2[j] != '\0')
	{
		str[i + j] = s2[j];
		j++;
	}
	str[i + j] = '\0';
	return (str);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*str;
	unsigned int	i;
	size_t			ex;

	i = 0;
	ex = ft_strlen(s) - start;
	if (len > ex)
		len = ex;
	if (!s)
		return (NULL);
	if (start > ft_strlen(s))
		return (ft_strdup(""));
	str = (char *)malloc(sizeof(char) * (len + 1));
	if (!str)
		return (NULL);
	while (s[start + i] && i < len)
	{
		str[i] = s[start + i];
		i++;
	}
	str[i] = '\0';
	return (str);
}

char	*fix_line(char *line)
{
	char	*holder;
	int		i;

	i = 0;
	holder = NULL;
	while (line[i] != '\n' && line[i] != '\0')
		i++;
	if (line[i] == '\0')
		return (NULL);
	holder = ft_substr(line, i + 1, ft_strlen(line) + i);
	if (!holder)
		return (NULL);
	if (holder[0] == '\0')
	{
		free(holder);
		return (NULL);
	}
	line[i + 1] = '\0';
	return (holder);
}

char	*fill_buffer(int fd, char *buffer, char *stash)
{
	int		read_bytes;
	char	*temp;

	read_bytes = 1;
	while (read_bytes)
	{
		read_bytes = read(fd, buffer, BUFFER_SIZE);
		if (read_bytes < 0)
			return (NULL);
		buffer[read_bytes] = '\0';
		if (read_bytes == 0)
			break ;
		if (stash == NULL)
			stash = ft_strdup("");
		temp = stash;
		stash = ft_strjoin(temp, buffer);
		free(temp);
		temp = NULL;
		if (!stash)
			return (NULL);
		if (ft_strchr(buffer, '\n'))
			break ;
	}
	return (stash);
}

char	*get_next_line(int fd)
{
	static char	*stash;
	char		*line;
	char		*buffer;

	if (fd < 0 || BUFFER_SIZE <= 0)
		return (NULL);
	buffer = (char *)malloc(sizeof(char) * (BUFFER_SIZE + 1));
	if (!buffer)
		return (NULL);
	line = fill_buffer(fd, buffer, stash);
	free(buffer);
	if (!line)
		return (NULL);
	stash = fix_line(line);
	return (line);
}

int close_free_one(int fd, char *line)
{
	close(fd);
	free (line);
	return (1);
}

int close_free_zero(int fd, char *line)
{
	close(fd);
	free (line);
	return (0);
}

int	is_map_rectangular_loop(t_map map, int fd, char *line)
{
	int	width_temp;

	while (1)
	{
		if ((line == NULL) || (int)ft_strlen(line) != map.width)
		{
			if ((int)ft_strlen(line) == map.width -1)
				return (close_free_zero(fd, line));
			else
				return (close_free_one(fd, line));
		}
		width_temp = ft_strlen(line);
		if (map.width != width_temp)
			return (close_free_one(fd, line));
		free (line);
		line = get_next_line(fd);
	}
	return (close_free_zero(fd, line));
}

int	is_map_rectangular(int fd)
{
	t_map	map;
	char	*line;

	fd = open("map.ber", O_RDONLY);
	line = get_next_line(fd);
	if (line == NULL)
		return (close_free_one(fd, line));
	map.width = ft_strlen(line);
	if (map.width == 0)
		return (close_free_one(fd, line));
	is_map_rectangular_loop(map, fd, line);
	return (0);
}

int	is_map_closed(int fd)
{
	char	*line;
	int		first_index;
	int		last_index;

	fd = open("map.ber", O_RDONLY);
	line = get_next_line(fd);
	first_index = 0;
	last_index = 0;
	while (line[last_index] != '\0' && line[last_index] != '\n')
		last_index++;
	if (line[last_index] == '\n')
		last_index--;
	while (line != NULL)
	{
		//	this is wrong, losing memory when map is incorrect!
		if (line[first_index] == '1' && line[last_index] == '1')
		{
			close(fd);
			free(line);
			return (0);
		}
		free (line);
		line = get_next_line(fd);
	}
	return (close_free_one(fd, line));
}

int	are_uniques_on_map(int fd)
{
	char	*line;
	int		ascii[255];
	int		i;

	fd = open("map.ber", O_RDONLY);
	line = get_next_line(fd);
	i = 0;
	while (i < 255)
	{
		ascii[i] = 0;
		i++;
	}
	while (line != NULL)
	{
		i = 0;
		while (line[i] != '\0')
		{
			if (line[i] == 'P')
				ascii['P']++;
			if (line[i] == 'E')
				ascii['E']++;
			if (line[i] == 'C')
				ascii['C']++;
			i++;
		}
		//	free previous line ?
		free (line);
		line = get_next_line(fd);
	}
	if (ascii['P'] != 1 || ascii['E'] != 1)
		return (1);
	if (ascii['C'] < 1)
		return (1);
	//	close file
	return (0);
}

// void	fill(char **tab, t_map size, t_map cur, char to_fill)
// {
// 	if (cur.height < 0 || cur.height >= size.height || cur.width < 0
// 		|| cur.width >= size.width || tab[cur.height][cur.width] != to_fill)
// 		return ;
// 	tab[cur.height][cur.width] = 'F';
// 	fill(tab, size, (t_map){cur.width - 1, cur.height, NULL}, to_fill);
// 	fill(tab, size, (t_map){cur.width + 1, cur.height, NULL}, to_fill);
// 	fill(tab, size, (t_map){cur.width, cur.height - 1, NULL}, to_fill);
// 	fill(tab, size, (t_map){cur.width, cur.height + 1, NULL}, to_fill);
// }

// void	flood_fill(char **tab, t_map size, t_map begin)
// {
// 	fill(tab, size, begin, tab[begin.y][begin.width]);
// }

// void	count_ec(char **tab, int rows, int cols)	
// {
// 	int		countE;
// 	int		countC;
// 	t_map	size;
// 	t_map	start;
// 	int		y;
// 	int		x;

// 	countE = 0;
// 	countC = 0;
// 	size = {cols, rows};
// 	y = 0;
// 	while (y < rows)
// 	{
// 		x = 0;
// 		while (x < cols)
// 		{
// 			if (tab[y][x] == 'E' || tab[y][x] == 'C')
// 			{
// 				start.x = x;
// 				start.y = y;
// 				flood_fill(tab, size, start);
// 				if (tab[y][x] == 'E')
// 				{
// 					countE++;
// 				}
// 				else if (tab[y][x] == 'C')
// 				{
// 					countC++;
// 				}
// 			}
// 			x++;
// 		}
// 		y++;
// 	}
// }

int	read_map(int fd)
{
	//	Does the map file exist?
	if (!fd)
		return (1);
	//	Is the map rectangular?
	if (is_map_rectangular(fd))
		return (1);
	// Is the map enclosed in walls?
	if (is_map_closed(fd))
		return (1);
	//	Is there only 1 exit, 1 player and at least 1 collectible?
	if (are_uniques_on_map(fd))
		return (1);
	return (0);
}

int	main(void)
{
	int	fd;

	fd = open("map.ber", O_RDONLY);
	printf("Result: %i\n", read_map(fd));
	close(fd);
	return (0);
}
