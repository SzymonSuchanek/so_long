/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssuchane <ssuchane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 16:58:56 by ssuchane          #+#    #+#             */
/*   Updated: 2024/07/03 16:18:11 by ssuchane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char		*ptr;
	unsigned int	i;

	ptr = (char *)malloc(ft_strlen(s) + 1);
	if (!ptr)
		return (NULL);
	i = 0;
	while (ptr[i])
	{
		ptr[i] = s[i];
		i++;
	}
	ptr[i] = '\0';
	return (ptr);
}

// int	main(void)
// {
// 	char	s[] = "testing";

// 	printf("%s\n", ft_strdup(s));
// 	printf("%s\n", strdup(s));
// 	return (0);
// }

// #include <string.h>

// // Unit test function
// void test_ft_strdup(const char *input)
// {
//     printf("Input: %s\n", input);

//     // Test the custom function ft_strdup
//     char *result_custom = ft_strdup(input);
//     printf("Custom result: %s\n", result_custom);

//     // Test the original strdup function
//     char *result_original = strdup(input);
//     printf("Original result: %s\n", result_original);

//     // Compare results
//     if ((result_custom == NULL && result_original == NULL) 
//		|| strcmp(result_custom, result_original) == 0)
//         printf("Test passed!\n");
//     else
//         printf("Test failed!\n");

//     // Free allocated memory
//     free(result_custom);
//     free(result_original);
// }

// int main()
// {
//     // Test edge cases
//     test_ft_strdup("");       // Empty string
//     test_ft_strdup("hello");  // Short string
//     test_ft_strdup("12345678901234567890123456789012345678901234567890");
//		Long string
//     test_ft_strdup(NULL);     // Null string

//     return 0;
// }
