/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssuchane <ssuchane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 16:58:56 by ssuchane          #+#    #+#             */
/*   Updated: 2024/03/18 19:33:02 by ssuchane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
		i++;
	while (i >= 0)
	{
		if (s[i] == (unsigned char )c)
			return ((char *)&s[i]);
		i--;
	}
	return (NULL);
}

// #include <string.h>

// // Test cases
// void test_strrchr(const char *str, int c) {
//     char *result_ft = ft_strrchr(str, c);
//     char *result_original = strrchr(str, c);

//     printf("Testing ft_strrchr with string: \"%s\", 
//		character '%c'\n", str, c);
//     printf("Expected output: %p\n", result_original);
//     printf("ft_strrchr output: %p\n", result_ft);

//     if (result_original == result_ft)
//         printf("Outputs match!\n");
//     else
//         printf("Outputs do not match!\n");

//     printf("\n");
// }

// int main() {
//     // Test cases
//     test_strrchr("hello world", 'l');
//     test_strrchr("hello world", 'o');
//     test_strrchr("hello world", 'h');
//     test_strrchr("hello world", ' ');
//     test_strrchr("hello world", 'x'); // Character not found

//     return 0;
// }
