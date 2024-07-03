/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssuchane <ssuchane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/03 16:34:31 by ssuchane          #+#    #+#             */
/*   Updated: 2024/07/03 16:38:38 by ssuchane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SO_LONG_H
# define SO_LONG_H

# include "library/Libft/libft.h"
# include "library/ft_printf/ft_printf.h"
# include <limits.h>

typedef struct s_map
{
	char	**map;
	int		width;
	int		height;
}		t_map;

#endif