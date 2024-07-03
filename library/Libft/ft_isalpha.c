/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssuchane <ssuchane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 13:02:04 by ssuchane          #+#    #+#             */
/*   Updated: 2024/03/06 22:43:01 by ssuchane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}

// #include "libft.h"
// #include <stdio.h>

// void	run_tests(void)
// {
// 	char	str1[] = "HelloWorld";
// 	char	str2[] = "Hello123";
// 	char	str3[] = "";
// 	char	str4[] = "abcdefghijklmnopqrstuvwxyz";
// 	char	str5[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
// 	char	str6[] = "HelloWORLD";
// 	char	str7[] = "!@#$%^&*()";
// 	char	str8[] = "Hello World";
// 	char	str9[] = "Hello@World!";

// 	// Test case 1: Testing with a string containing only alphabetic characters
// 	if (ft_isalpha(str1) == 1)
// 		printf("Test case 1 (alphabetic string): Passed\n");
// 	else
// 		printf("Test case 1 (alphabetic string): Failed\n");
// 	// Test case 2: Testing with a string containing non-alphabetic characters
// 	if (ft_isalpha(str2) == 0)
// 		printf("Test case 2 (non-alphabetic string): Passed\n");
// 	else
// 		printf("Test case 2 (non-alphabetic string): Failed\n");
// 	// Test case 3: Testing with an empty string
// 	if (ft_isalpha(str3) == 0)
// 		printf("Test case 3 (empty string): Passed\n");
// 	else
// 		printf("Test case 3 (empty string): Failed\n");
// 	// Test case 4: Testing with all lowercase alphabetic characters
// 	if (ft_isalpha(str4) == 1)
// 		printf("Test case 4 (lowercase alphabetic string): Passed\n");
// 	else
// 		printf("Test case 4 (lowercase alphabetic string): Failed\n");
// 	// Test case 5: Testing with all uppercase alphabetic characters
// 	if (ft_isalpha(str5) == 1)
// 		printf("Test case 5 (uppercase alphabetic string): Passed\n");
// 	else
// 		printf("Test case 5 (uppercase alphabetic string): Failed\n");
// 	// Test case 6: Testing with a string containing both lowercase 
//		and uppercase alphabetic characters
// 	if (ft_isalpha(str6) == 1)
// 		printf("Test case 6 (mixed case alphabetic string): Passed\n");
// 	else
// 		printf("Test case 6 (mixed case alphabetic string): Failed\n");
// 	// Test case 7: Testing with a string containing only 
//		non-alphabetic characters
// 	if (ft_isalpha(str7) == 0)
// 		printf("Test case 7 (non-alphabetic string): Passed\n");
// 	else
// 		printf("Test case 7 (non-alphabetic string): Failed\n");
// 	// Test case 8: Testing with a string containing spaces
// 	if (ft_isalpha(str8) == 0)
// 		printf("Test case 8 (string with spaces): Passed\n");
// 	else
// 		printf("Test case 8 (string with spaces): Failed\n");
// 	// Test case 9: Testing with a string containing special characters
// 	if (ft_isalpha(str9) == 0)
// 		printf("Test case 9 (string with special characters): Passed\n");
// 	else
// 		printf("Test case 9 (string with special characters): Failed\n");
// }

// // Main function to run the tests
// int	main(void)
// {
// 	printf("Running tests for ft_isalpha:\n");
// 	run_tests();
// 	return (0);
// }
