/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssuchane <ssuchane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 16:58:56 by ssuchane          #+#    #+#             */
/*   Updated: 2024/03/16 16:16:55 by ssuchane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	unsigned int	i;
	unsigned int	len1;
	unsigned int	len2;

	i = 0;
	len1 = 0;
	len2 = 0;
	while (src[len1])
		len1++;
	while (dst[len2] && len2 < size)
		len2++;
	if (size <= len2)
		return (len1 + len2);
	while (src[i] && len2 + i < size - 1)
	{
		dst[len2 + i] = src[i];
		i++;
	}
	dst[len2 + i] = '\0';
	return (len1 + len2);
}

// int	main(void)
// {
// 	char	s1[] = "Test";
// 	char	s2[] = "Test";
// 	// char	s3[] = "Test";
// 	// char	s4[] = "Test";

// 	printf("%zu\n", ft_strlcat(s1, s2, 9));
// 	printf("%s", s1);
// 	// printf("%zu\n", strlcat(s3, s4, 9));
// 	// printf("%s", s3);
// 	return (0);
// }

// size_t ft_strlcat(char *dst, const char *src, size_t size);

// void run_test_case(const char *name, char *dst, const char *src, 
//		size_t size, size_t expected) {
//     size_t result = ft_strlcat(dst, src, size);
//     if (result == expected)
//         printf("%s: Passed\n", name);
//     else
//         printf("%s: Failed (Expected: %zu, Got: %zu)\n", 
//		name, expected, result);
// }

// int main() {
//     // Test Case 1: Empty destination string
//     char dest1[20] = "";
//     const char src1[] = "Hello";
//     size_t size1 = 10;
//     size_t expected1 = 5;
//     run_test_case("Test Case 1", dest1, src1, size1, expected1);

//     // Test Case 2: Empty source string
//     char dest2[20] = "Destination";
//     const char src2[] = "";
//     size_t size2 = 10;
//     size_t expected2 = 11;
//     run_test_case("Test Case 2", dest2, src2, size2, expected2);

//     // Test Case 3: Destination string length equal to size parameter
//     char dest3[20] = "Destination";
//     const char src3[] = "Hello";
//     size_t size3 = 11;
//     size_t expected3 = 18;
//     run_test_case("Test Case 3", dest3, src3, size3, expected3);

//     // Test Case 4: Destination string length greater than size parameter
//     char dest4[5] = "Dest";
//     const char src4[] = "Hello";
//     size_t size4 = 5;
//     size_t expected4 = 9;
//     run_test_case("Test Case 4", dest4, src4, size4, expected4);

//     // Test Case 5: Source string length greater than 
//		remaining space in destination string
//     char dest5[10] = "Dest";
//     const char src5[] = "Hello";
//     size_t size5 = 5;
//     size_t expected5 = 9;
//     run_test_case("Test Case 5", dest5, src5, size5, expected5);

//     // Test Case 6: Source string length 
//		less than or equal to remaining space in destination string
//     char dest6[10] = "Dest";
//     const char src6[] = "Hi";
//     size_t size6 = 10;
//     size_t expected6 = 7;
//     run_test_case("Test Case 6", dest6, src6, size6, expected6);

//     return 0;
// }
