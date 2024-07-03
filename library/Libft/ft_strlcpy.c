/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssuchane <ssuchane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/27 18:45:47 by ssuchane          #+#    #+#             */
/*   Updated: 2024/03/06 22:28:33 by ssuchane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	unsigned int	i;
	unsigned int	len;

	i = 0;
	len = 0;
	while (src[len])
		len++;
	if (size < 1)
		return (len);
	while (src[i] && i < size - 1)
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (len);
}

// int	main(void)
// {
// 	char	dest[100];
// 	char	src[50] = "\0";

// 	printf("%d\n", (ft_strlcpy(dest, src, 4)));
// 	printf("%c\n", dest[0]);
// 	return (0);
// }

// #include <string.h>

// // Function to compare strings
// int compare_strings(const char *str1, const char *str2) {
//     return strcmp(str1, str2) == 0;
// }

// // Function to run test cases
// void run_test_case(const char *test_name, char *dst, 
//		const char *src, size_t size, const char *expected_output) {
//     ft_strlcpy(dst, src, size);
//     printf("%s: ", test_name);
//     if (compare_strings(dst, expected_output)) {
//         printf("Test passed\n");
//     } else {
//         printf("Test failed\n");
//     }
// }

// int main() {
//     char dst[20]; // Destination buffer

//     // Test Case 1: Empty source string
//     run_test_case("Test Case 1", dst, "", 10, "");

//     // Test Case 2: Empty destination string
//     run_test_case("Test Case 2", dst, "Hello", 0, "");

//     // Test Case 3: Source string longer than destination buffer
//     run_test_case("Test Case 3", dst, "This is a long string", 
//		10, "This is a");

//     // Test Case 4: Destination buffer size of 0
//     run_test_case("Test Case 4", dst, "Hello", 0, "");

//     // Test Case 5: Destination buffer size of 1
//     run_test_case("Test Case 5", dst, "Hello", 1, "");

//     // Test Case 6: Destination buffer size equal to source string length
//     run_test_case("Test Case 6", dst, "Hello", 6, "Hello");

//     // Test Case 7: Destination buffer size larger than source string length
//     run_test_case("Test Case 7", dst, "Hello", 10, "Hello");

//     // Test Case 8: NULL pointers for source and/or destination
//     run_test_case("Test Case 8", NULL, NULL, 10, ""); 
// 		Assuming the expected output is an empty string in this case

//     return 0;
// }
