/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssuchane <ssuchane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 16:58:56 by ssuchane          #+#    #+#             */
/*   Updated: 2024/03/06 22:30:01 by ssuchane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (*little == '\0')
		return ((char *)big);
	while (big[i] != '\0' && i < len)
	{
		j = 0;
		while (big[i + j] == little[j] && little[j] != '\0' && (j + i) < len)
		{
			j++;
			if (little[j] == '\0')
				return ((char *)&big[i]);
		}
		i++;
	}
	return (NULL);
}

// int	main(void)
// {
// 	const char	little[] = "tutaj";
// 	const char	big[] = "Znajdziesz mnie tutaj lub nie";

// 	printf("%s\n", ft_strnstr(big, little, 5));
// 	return (0);
// }

// #include <string.h>

// int main() {
//     // Test Cases
//     const char *big = "hello world";

//     // Test Case 1
//     printf("Test Case 1:\n");
//     const char *little1 = "world";
//     size_t len1 = 12;
//     printf("Expected Output: \"world\"\n");
//     printf("Actual Output: \"%s\"\n", ft_strnstr(big, little1, len1));
//     printf("Outputs Match: %s\n", strcmp(ft_strnstr(big, little1, len1), 
//		"world") == 0 ? "Yes" : "No");

//     // Test Case 2
//     printf("\nTest Case 2:\n");
//     const char *little2 = "earth";
//     size_t len2 = 8;
//     printf("Expected Output: \"(null)\"\n");
//     printf("Actual Output: \"%s\"\n", ft_strnstr(big, little2, len2));
//     printf("Outputs Match: %s\n", 
//		ft_strnstr(big, little2, len2) == NULL ? "Yes" : "No");

//     // Test Case 3
//     printf("\nTest Case 3:\n");
//     const char *little3 = "world";
//     size_t len3 = 5;
//     printf("Expected Output: \"(null)\"\n");
//     printf("Actual Output: \"%s\"\n", ft_strnstr(big, little3, len3));
//     printf("Outputs Match: %s\n", 
//		ft_strnstr(big, little3, len3) == NULL ? "Yes" : "No");

//     // Test Case 4
//     printf("\nTest Case 4:\n");
//     const char *little4 = "";
//     size_t len4 = 12;
//     printf("Expected Output: \"hello world\"\n");
//     printf("Actual Output: \"%s\"\n", ft_strnstr(big, little4, len4));
//     printf("Outputs Match: %s\n", 
//		strcmp(ft_strnstr(big, little4, len4), 
//		"hello world") == 0 ? "Yes" : "No");

//     // Test Case 5
//     printf("\nTest Case 5:\n");
//     const char *big5 = "";
//     const char *little5 = "world";
//     size_t len5 = 5;
//     printf("Expected Output: \"(null)\"\n");
//     printf("Actual Output: \"%s\"\n", ft_strnstr(big5, little5, len5));
//     printf("Outputs Match: %s\n", 
//		ft_strnstr(big5, little5, len5) == NULL ? "Yes" : "No");

//     // Test Case 6
//     printf("\nTest Case 6:\n");
//     const char *big6 = "";
//     const char *little6 = "";
//     size_t len6 = 0;
//     printf("Expected Output: \"\"\n");
//     printf("Actual Output: \"%s\"\n", ft_strnstr(big6, little6, len6));
//     printf("Outputs Match: %s\n", 
//		strcmp(ft_strnstr(big6, little6, len6), "") == 0 ? "Yes" : "No");

//     // Test Case 7
//     printf("\nTest Case 7:\n");
//     const char *big7 = "hello world";
//     const char *little7 = "hello";
//     size_t len7 = 12;
//     printf("Expected Output: \"hello world\"\n");
//     printf("Actual Output: \"%s\"\n", ft_strnstr(big7, little7, len7));
//     printf("Outputs Match: %s\n", 
//		strcmp(ft_strnstr(big7, little7, len7), "hello world") 
//		== 0 ? "Yes" : "No");

//     // Test Case 8
//     printf("\nTest Case 8:\n");
//     const char *big8 = "hello world";
//     const char *little8 = "world";
//     size_t len8 = 11;
//     printf("Expected Output: \"world\"\n");
//     printf("Actual Output: \"%s\"\n", ft_strnstr(big8, little8, len8));
//     printf("Outputs Match: %s\n", 
//		strcmp(ft_strnstr(big8, little8, len8), "world") == 0 ? "Yes" : "No");

//     return 0;
// }