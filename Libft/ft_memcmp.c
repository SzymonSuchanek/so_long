/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssuchane <ssuchane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 16:58:56 by ssuchane          #+#    #+#             */
/*   Updated: 2024/03/06 23:32:08 by ssuchane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	while (n--)
	{
		if (*(unsigned char *)s1 != *(unsigned char *)s2)
			return (*(unsigned char *)s1 - *(unsigned char *)s2);
		s1++;
		s2++;
	}
	return (0);
}

// #include <string.h>

// void	test_ft_memcmp(const void *s1, const void *s2, size_t n)
// {
// 	int	result_ft;
// 	int	result_orig;

// 	result_ft = ft_memcmp(s1, s2, n);
// 	result_orig = memcmp(s1, s2, n);
// 	printf("Comparing: \"%s\" and \"%s\" (%zu characters)\n", (char *)s1,
// 		(char *)s2, n);
// 	printf("ft_memcmp result: %d\n", result_ft);
// 	printf("memcmp result: %d\n", result_orig);
// 	if (result_ft == result_orig)
// 	{
// 		printf("Test Passed: Results are identical\n");
// 	}
// 	else
// 	{
// 		printf("Test Failed: Results are different\n");
// 	}
// 	printf("\n");
// }

// int	main(void)
// {
// 	// Test cases
// 	char str1[] = "Hello, World!";
// 	char str2[] = "Hello, World!";
// 	char str3[] = "Hello!";
// 	char str4[] = "Hello, World! ";
// 	char str5[] = "Hello, World?!";
// 	char str6[] = "Hello";
// 	char str7[] = "Hello, World!";
// 	char str8[] = "";

// 	test_ft_memcmp(str1, str2, strlen(str1)); // Equal strings
// 	test_ft_memcmp(str1, str3, strlen(str1)); // Same prefix
// 	test_ft_memcmp(str1, str4, strlen(str1)); // s1 is shorter
// 	test_ft_memcmp(str6, str1, strlen(str1)); // s2 is shorter
// 	test_ft_memcmp(str1, str5, strlen(str1)); // Different character
// 	test_ft_memcmp(str1, str2, 0);            // Zero size
// 	test_ft_memcmp(str1, str7, strlen(str1)); // Identical strings
// 	test_ft_memcmp(str1, str8, strlen(str1)); // Second string is empty
// 	test_ft_memcmp(str8, str1, strlen(str1)); // First string is empty

// 	return (0);
// }
