/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssuchane <ssuchane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 16:58:56 by ssuchane          #+#    #+#             */
/*   Updated: 2024/03/05 21:20:46 by ssuchane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char		*ptr1;
	const unsigned char	*ptr2;
	size_t				i;

	ptr1 = dest;
	ptr2 = src;
	i = 0;
	while (i < n)
	{
		ptr1[i] = ptr2[i];
		i++;
	}
	return (dest);
}

// #include "libft.h"
// #include <string.h> // for memcpy

// #define TEST_SIZE 10

// int	main(void)
// {
// 	char src[TEST_SIZE] = "Hello1234";
// 	char dest[TEST_SIZE] = "000000000";

// 	// Test case 1: Copying data from src to dest
// 	ft_memcpy(dest, src, TEST_SIZE);
// 	char dest2[TEST_SIZE] = "000000000";
// 	memcpy(dest2, src, TEST_SIZE);
// 	printf("Test case 1: ft_memcpy vs memcpy - %s\n", strcmp(dest,
// 			dest2) == 0 ? "Passed" : "Failed");

// 	// Test case 2: Comparing output with original memcpy
// 	char dest3[TEST_SIZE] = "000000000";
// 	ft_memcpy(dest3, src, 0);
// 	char dest4[TEST_SIZE] = "000000000";
// 	memcpy(dest4, src, 0);
// 	printf("Test case 2: ft_memcpy with 0 bytes vs memcpy - %s\n", strcmp(dest3,
// 			dest4) == 0 ? "Passed" : "Failed");

// 	// Test case 3: Copying less than TEST_SIZE bytes
// 	char src5[TEST_SIZE] = "Hello1234";
// 	char dest5[TEST_SIZE] = "000000000";
// 	ft_memcpy(dest5, src5, TEST_SIZE - 5);
// 	char dest6[TEST_SIZE] = "000000000";
// 	memcpy(dest6, src5, TEST_SIZE - 5);
// 	printf("Test case 3: ft_memcpy with less than TEST_SIZE 
//		bytes vs memcpy - %s\n",
// 	strncmp(dest5, dest6, TEST_SIZE - 5) == 0 ? "Passed" : "Failed");

// 	// Test case 4: Copying more than TEST_SIZE bytes
// 	char src7[TEST_SIZE * 2] = "Hello1234Hello1234";
// 	char dest7[TEST_SIZE] = "000000000";
// 	ft_memcpy(dest7, src7, TEST_SIZE);
// 	char dest8[TEST_SIZE] = "000000000";
// 	memcpy(dest8, src7, TEST_SIZE);
// 	printf("Test case 4: ft_memcpy with more than 
//		TEST_SIZE bytes vs memcpy - %s\n",
// 	strncmp(dest7, dest8, TEST_SIZE) == 0 ? "Passed" : "Failed");

// 	return (0);
// }
