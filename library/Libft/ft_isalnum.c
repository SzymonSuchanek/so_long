/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssuchane <ssuchane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 13:22:20 by ssuchane          #+#    #+#             */
/*   Updated: 2024/03/06 22:46:25 by ssuchane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	return (ft_isalpha(c) || ft_isdigit(c));
}

// #include <stdbool.h>

// bool	test_isalnum(char *str, int expected)
// {
// 	int	result;

// 	result = ft_isalnum(str);
// 	if (result == expected)
// 	{
// 		printf("PASS: '%s' - Expected: %d, Got: %d\n", str, expected, result);
// 		return (true);
// 	}
// 	else
// 	{
// 		printf("FAIL: '%s' - Expected: %d, Got: %d\n", str, expected, result);
// 		return (false);
// 	}
// }

// int	main(void)
// {
// 	// Test cases
// 	test_isalnum("", 0);        // Empty string is not alphanumeric
// 	test_isalnum("abc123", 1);  // Alphanumeric string
// 	test_isalnum("123", 1);     // Numeric string
// 	test_isalnum("abc", 1);     // Alphabetical string
// 	test_isalnum("!@#", 0);     // Non-alphanumeric characters
// 	test_isalnum("abc123!", 0); // Non-alphanumeric characters present

// 	return (0);
// }
