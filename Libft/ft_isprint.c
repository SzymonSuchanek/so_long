/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssuchane <ssuchane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 16:16:11 by ssuchane          #+#    #+#             */
/*   Updated: 2024/03/06 22:50:19 by ssuchane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int c)
{
	return (c >= 32 && c < 127);
}

// void	test_ft_isprint(char *str, int expected)
// {
// 	int	result;

// 	result = ft_isprint(str);
// 	if (result == expected)
// 	{
// 		printf("Test Passed: ft_isprint(\"%s\") = %d\n", str, expected);
// 	}
// 	else
// 	{
// 		printf("Test Failed: ft_isprint(\"%s\") expected %d but got %d\n", str,
// 			expected, result);
// 	}
// }

// int	main(void)
// {
// 	// Test cases
// 	test_ft_isprint("Hello World!", 1);                   
// 		// All printable characters
// 	test_ft_isprint("12345", 1);                           // Digits
// 	test_ft_isprint("!@#$%^&*()_+{}[]|\\;:\"<>,.?/~`", 1); // Special characters
// 	test_ft_isprint("\t\n\r\v\f", 0);                     
// 		// Non-printable characters
// 	test_ft_isprint("", 1);                                // Empty string
// 	return (0);
// }
