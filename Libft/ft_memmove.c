/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssuchane <ssuchane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 16:58:56 by ssuchane          #+#    #+#             */
/*   Updated: 2024/03/05 21:32:22 by ssuchane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char		*ptr1;
	const unsigned char	*ptr2;
	size_t				i;

	ptr1 = dest;
	ptr2 = src;
	if (dest == NULL && src == NULL)
		return (NULL);
	if (ptr1 < ptr2)
		ft_memcpy(dest, src, n);
	else
	{
		i = n;
		while (i > 0)
		{
			ptr1[i - 1] = ptr2[i - 1];
			i--;
		}
	}
	return (dest);
}

// #include <string.h>

// int		main(int argc, const char *argv[])
// {
// 	char	src[] = "lorem ipsum dolor sit amet";
// 	char	*dest;
// 	int		arg;

// 	dest = src + 1;
// 	alarm(5);
// 	if (argc == 1)
// 		return (0);
// 	else if ((arg = atoi(argv[1])) == 1)
// 	{
// 		if (dest != ft_memmove(dest, "consectetur", 5))
// 			write(1, "dest's adress was not returned\n", 31);
// 		write(1, dest, 22);
// 	}
// 	else if (arg == 2)
// 	{
// 		if (dest != ft_memmove(dest, "con\0sec\0\0te\0tur", 10))
// 			write(1, "dest's adress was not returned\n", 31);
// 		write(1, dest, 22);
// 	}
// 	else if (arg == 3)
// 	{
// 		if (dest != ft_memmove(dest, src, 8))
// 			write(1, "dest's adress was not returned\n", 31);
// 		write(1, dest, 22);
// 	}
// 	else if (arg == 4)
// 	{
// 		if (src != ft_memmove(src, dest, 8))
// 			write(1, "dest's adress was not returned\n", 31);
// 		write(1, dest, 22);
// 	}
// 	else if (arg == 5)
// 	{
// 		if (src != ft_memmove(src, dest, 0))
// 			write(1, "dest's adress was not returned\n", 31);
// 		write(1, dest, 22);
// 	}
// 	return (0);
// }
