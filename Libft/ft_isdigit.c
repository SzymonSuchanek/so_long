/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssuchane <ssuchane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 13:22:20 by ssuchane          #+#    #+#             */
/*   Updated: 2024/03/06 22:44:16 by ssuchane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int c)
{
	return (c >= '0' && c <= '9');
}

// void	test_ft_isdigit(char *str, int expected)
// {
// 	int	result;

// 	result = ft_isdigit(str);
// 	if (result == expected)
// 	{
// 		printf("Test Passed: ft_isdigit(\"%s\") = %d\n", str, expected);
// 	}
// 	else
// 	{
// 		printf("Test Failed: ft_isdigit(\"%s\") expected %d but got %d\n", str,
// 			expected, result);
// 	}
// }

// int	main(void)
// {
// 	// Test cases
// 	test_ft_isdigit("123", 1);    // All digits
// 	test_ft_isdigit("0", 1);      // Single digit
// 	test_ft_isdigit("abc", 0);    // No digits
// 	test_ft_isdigit("123abc", 0); // Digits followed by characters
// 	test_ft_isdigit("abc123", 0); // Characters followed by digits
// 	test_ft_isdigit(" ", 0);      // Space
// 	test_ft_isdigit("", 0);       // Empty string
// 	return (0);
// }
