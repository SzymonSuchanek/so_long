/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssuchane <ssuchane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 16:58:56 by ssuchane          #+#    #+#             */
/*   Updated: 2024/03/04 10:50:47 by ssuchane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char	*pos;
	size_t				i;

	pos = s;
	i = 0;
	while (i < n)
	{
		if (pos[i] == (unsigned char)c)
			return ((void *)(pos + i));
		i++;
	}
	return (0);
}

// #include <string.h>

// void	test_ft_memchr(const void *s, int c, size_t n, int expected_result)
// {
// 	void	*result;

// 	result = ft_memchr(s, c, n);
// 	if ((result != NULL && expected_result == 1) || (result == NULL
// 			&& expected_result == 0))
// 	{
// 		printf("Test Passed: ft_memchr(\"%s\", %d, %zu)\n", (char *)s, c, n);
// 	}
// 	else
// 	{
// 		printf("Test Failed: ft_memchr(\"%s\", %d, %zu)\n", (char *)s, c, n);
// 	}
// }

// int	main(void)
// {
// 	char	str[] = "Hello World!";

// 	// Test cases
// 	test_ft_memchr(str, 'o', strlen(str), 1);  // Character found
// 	test_ft_memchr(str, 'x', strlen(str), 0);  // Character not found
// 	test_ft_memchr(str, 'H', strlen(str), 1);  // First character
// 	test_ft_memchr(str, '\0', strlen(str), 0);
// 		// Null character not found within the specified range
// 	test_ft_memchr(str, '!', strlen(str), 1);  // Character found in the string
// 	test_ft_memchr(str, '!', 0, 0);            // Empty string
// 	return (0);
// }
