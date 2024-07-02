/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssuchane <ssuchane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/01 16:07:25 by ssuchane          #+#    #+#             */
/*   Updated: 2024/07/02 14:13:35 by ssuchane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SO_LONG_H
# define SO_LONG_H

# include "Libft/libft.h"
# include "get_next_line/get_next_line.h"
# include <fcntl.h>
# include <limits.h>

typedef struct s_map
{
	int		width;
	int		height;
	char	**data;
}		t_map;

#endif