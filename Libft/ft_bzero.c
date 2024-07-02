/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssuchane <ssuchane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 16:58:56 by ssuchane          #+#    #+#             */
/*   Updated: 2024/03/05 21:20:25 by ssuchane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t			i;
	unsigned char	*ptr;

	i = 0;
	ptr = (unsigned char *)s;
	while (i < n)
	{
		ptr[i] = '\0';
		i++;
	}
}

// int	main(void)
// {
// 	char str1[] = "Hello";

// 	ft_bzero(str1, 0);
// 	printf("Test case 1: %s\n", str1);

// 	char str2[] = "Hello";

// 	ft_bzero(str2, 3);
// 	printf("Test case 2: ");
// 	for (unsigned int i = 0; i < sizeof(str2); i++)
// 		printf("%d ", str2[i]);
// 	printf("\n");

// 	char str3[] = "Hello";

// 	ft_bzero(str3, 10);
// 	printf("Test case 3: ");
// 	for (unsigned int i = 0; i < sizeof(str3); i++)
// 		printf("%d ", str3[i]);
// 	printf("\n");

// 	int arr[] = {1, 2, 3, 4, 5};

// 	ft_bzero(arr, sizeof(arr));
// 	printf("Test case 4: ");
// 	for (unsigned int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
// 		printf("%d ", arr[i]);
// 	printf("\n");

// 	char str5[] = "";

// 	ft_bzero(str5, 5);
// 	printf("Test case 1: %s\n", str5);

// 	return (0);
// }
