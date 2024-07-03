/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssuchane <ssuchane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 16:58:56 by ssuchane          #+#    #+#             */
/*   Updated: 2024/03/05 18:30:15 by ssuchane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*ptr;

	i = 0;
	ptr = s;
	while (i < n)
	{
		ptr[i] = (unsigned char)c;
		i++;
	}
	return (s);
}

// int	main(void)
// {
// 	char buffer[10];

// 	memset(buffer, 'a', sizeof(char) * 10);
// 	for (int i = 0; i < 10; i++)
// 		printf("%c", buffer[i]);
// 	return (0);
// }

// #include <string.h>

// int main()
// {
//     // Test case 1: Normal case
//     char str1[] = "Hello, World!";
//     ft_memset(str1, 'a', 5);
//     memset(str1, 'a', 5);
//     if (strcmp(str1, "aaaaa, World!") != 0)
//     {
//         printf("Test case 1 failed.\n");
//     }
//     else
//     {
//         printf("Test case 1 passed.\n");
//     }

//     // Test case 2: Setting all characters to null terminator
//     char str2[] = "This is a test";
//     ft_memset(str2, '\0', strlen(str2));
//     memset(str2, '\0', strlen(str2));
//     if (strcmp(str2, "") != 0)
//     {
//         printf("Test case 2 failed.\n");
//     }
//     else
//     {
//         printf("Test case 2 passed.\n");
//     }

//     // Test case 3: Setting a single character
//     char str3[] = "abcde";
//     ft_memset(str3, 'X', 1);
//     memset(str3, 'X', 1);
//     if (strcmp(str3, "Xbcde") != 0)
//     {
//         printf("Test case 3 failed.\n");
//     }
//     else
//     {
//         printf("Test case 3 passed.\n");
//     }

//  // Test case 4: Setting beyond string length
// char str4[] = "abc";
// size_t str4_len = strlen(str4);
// ft_memset(str4, 'X', str4_len);
// memset(str4, 'X', str4_len);
// if (strcmp(str4, "XXX") != 0)
// {
//     printf("Test case 4 failed.\n");
// }
// else
// {
//     printf("Test case 4 passed.\n");
// }

//     return 0;
// }
