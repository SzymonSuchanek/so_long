/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssuchane <ssuchane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 16:58:56 by ssuchane          #+#    #+#             */
/*   Updated: 2024/03/08 16:35:04 by ssuchane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	unsigned int	i;

	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == (char)c)
			return ((char *)&s[i]);
		i++;
	}
	if (c == '\0')
		return ((char *)&s[i]);
	return (0);
}

// int	main(void)
// {
// 	char	s1[] = "Zzgggggggggggggggggg";
// 	int	c = 5;

// 	printf("%s", ft_strchr(s1, c));
// 	printf("%s", strchr(s1, c));
// 	return (0);
// }

// #include <string.h>

// void test_case(const char *test_str, int test_char) {
//     char *result_ft = ft_strchr(test_str, test_char);
//     char *result_libc = strchr(test_str, test_char);

//     printf("Test case: Searching for '%c' in \"%s\"\n", test_char, test_str);

//     if (result_ft == result_libc) {
//         printf("Test successful: Both functions returned the same 
//		result.\n");
//     } else {
//         printf("Test failed: Results differed.\n");
//         printf("Expected result: %s\n", result_libc);
//         printf("Your function result: %s\n", result_ft);
//     }
//     printf("\n");
// }

// int main()
// {
//     // Test cases
//     test_case("hello", 'e');
//     test_case("hello", 'l');
//     test_case("hello", 'h');
//     test_case("hello", 'o');
//     test_case("hello", 'x');
//     test_case("", 'a');
//     test_case("hello", '\0'); // Test for null character
//     test_case("hello", 0);    // Test for null character using ASCII value 0
//     test_case("hello", 127);  // Test for non-ASCII character

//     return 0;
// }
