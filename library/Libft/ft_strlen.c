/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssuchane <ssuchane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 12:36:57 by ssuchane          #+#    #+#             */
/*   Updated: 2024/03/13 20:04:43 by ssuchane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	if (!s)
		return (0);
	while (s[i] != '\0')
		i++;
	return (i);
}

// #include <string.h>

// int main()
// {
//     const char *test_strings[] = {
//         "Hello, world!",
//         "",
//         "This is a test string.",
//         "Another string",
//         "12345",
//         "This is a much longer string that is used for testing purposes.",
//         NULL
//     };

//     printf("Testing ft_strlen:\n");
//     for (int i = 0; test_strings[i] != NULL; i++) {
//         size_t ft_result = ft_strlen(test_strings[i]);
//         size_t original_result = strlen(test_strings[i]);

//         printf("String: \"%s\" - ft_strlen: %zu, strlen: %zu - ",
//                test_strings[i], ft_result, original_result);

//         if (ft_result == original_result) {
//             printf("Output matches.\n");
//         } else {
//             printf("Output differs.\n");
//         }
//     }

//     return 0;
// }
