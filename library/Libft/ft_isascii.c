/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssuchane <ssuchane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 16:16:11 by ssuchane          #+#    #+#             */
/*   Updated: 2024/03/06 22:40:52 by ssuchane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int c)
{
	return (c >= 0 && c <= 127);
}

// #include <assert.h>

// int	run_tests(void)
// {
// 	assert(ft_isascii('a') == 1);
// 	assert(ft_isascii('A') == 1);
// 	assert(ft_isascii('0') == 1);
// 	assert(ft_isascii('$') == 1);
// 	assert(ft_isascii('\n') == 1);
// 	assert(ft_isascii('\t') == 1);
// 	assert(ft_isascii('\0') == 1);
// 	assert(ft_isascii(128) == 0);
// 	printf("All tests passed!\n");
// 	return (1);
// }

// int	main(void)
// {
// 	run_tests();
// 	return (0);
// }
