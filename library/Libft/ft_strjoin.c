/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssuchane <ssuchane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 16:58:56 by ssuchane          #+#    #+#             */
/*   Updated: 2024/07/03 16:18:44 by ssuchane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(const char *s1, const char *s2)
{
	char	*joined;
	size_t	s1_len;
	size_t	s2_len;

	if (!s1 && !s2)
		return (NULL);
	if (!s1)
		return (ft_strdup(s2));
	if (!s2)
		return (ft_strdup(s1));
	s1_len = ft_strlen(s1);
	s2_len = ft_strlen(s2);
	joined = malloc(s1_len + s2_len + 1);
	if (!joined)
		return (NULL);
	ft_memcpy(joined, s1, s1_len);
	ft_memcpy(joined + s1_len, s2, s2_len + 1);
	return (joined);
}

// int	main(void)
// {
// 	char	s1[] = "Test";
// 	char	s2[] = "ing";

// 	printf("%s", ft_strjoin((const char *)s1, s2));
// 	return (0);
// }

// #include <string.h>

// // Your ft_strjoin implementation
// char	*ft_strjoin(char const *s1, char const *s2);

// // Function to compare strings
// int compareStrings(const char *expected, const char *result) {
//     if (strcmp(expected, result) == 0) {
//         printf("Test succeeded. Expected: \"%s\", 
//		Result: \"%s\"\n", expected, result);
//         return 1;
//     } else {
//         printf("Test failed. Expected: 
//		\"%s\", Result: \"%s\"\n", expected, result);
//         return 0;
//     }
// }

// // Test cases
// void runTests() {
//     int passed = 0;

//     // Test Case 1: Both Strings Empty
//     passed += compareStrings("", ft_strjoin("", ""));

//     // Test Case 2: First String Empty
//     passed += compareStrings("test", ft_strjoin("", "test"));

//     // Test Case 3: Second String Empty
//     passed += compareStrings("test", ft_strjoin("test", ""));

//     // Test Case 4: Both Strings Non-Empty
//     passed += compareStrings("Hello World", ft_strjoin("Hello", " World"));

//     // Test Case 5: Memory Allocation Failure
//     passed += (ft_strjoin("This is a very long 
//		string", "Another long string") == NULL);

//     // Test Case 6: One String Null Pointer
//     passed += (ft_strjoin(NULL, "test") == NULL);

//     // Test Case 7: Both Strings Null Pointer
//     passed += (ft_strjoin(NULL, NULL) == NULL);

//     // Test Case 8: Strings longer than MAX_SIZE
//     // Simulate by not implementing this for now.

//     printf("\n%d out of 7 tests passed.\n", passed);
// }

// int main() {
//     runTests();
//     return 0;
// }
