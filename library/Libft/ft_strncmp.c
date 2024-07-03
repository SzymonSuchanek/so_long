/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssuchane <ssuchane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/28 12:11:22 by ssuchane          #+#    #+#             */
/*   Updated: 2024/03/07 01:10:37 by ssuchane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	if (n == 0)
		return (0);
	while (s1[i] && s2[i] && s1[i] == s2[i] && i < n)
		i++;
	if (i == n)
		return (0);
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}

// #include <string.h>

// // Original strncmp function
// int original_strncmp(char *s1, char *s2, unsigned int n)
// {
//     return strncmp(s1, s2, n);
// }

// // Test function
// void test_strncmp(char *s1, char *s2, unsigned int n)
// {
//     printf("Testing ft_strncmp('%s', '%s', %u):\n", s1, s2, n);

//     int expected = original_strncmp(s1, s2, n);
//     int result = ft_strncmp(s1, s2, n);

//     printf("Expected: %d\n", expected);
//     printf("Result: %d\n", result);

//     if (expected == result)
//         printf("Test Passed\n\n");
//     else
//         printf("Test Failed\n\n");
// }

// int main()
// {
//     // Test cases
//     test_strncmp("Hello", "Hello", 5);
//     test_strncmp("Hello", "World", 5);
//     test_strncmp("Hello", "Hell", 5);
//     test_strncmp("Hello", "Hello World", 5);
//     test_strncmp("Hello", "Hello", 0);
//     test_strncmp("Hello", "", 5);
//     test_strncmp("", "", 0);
//     test_strncmp("Hello", "Hello", 10);
//     test_strncmp("Hello", "Hel", 10);
//     test_strncmp("Hello", "Helloo", 10);

//     return 0;
// }
