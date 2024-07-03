/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssuchane <ssuchane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 16:58:56 by ssuchane          #+#    #+#             */
/*   Updated: 2024/03/15 23:13:51 by ssuchane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*ptr;

	if (nmemb == 0 || size == 0)
	{
		nmemb = 1;
		size = 1;
	}
	if (nmemb > 2147483647 / size)
		return (NULL);
	ptr = malloc(size * nmemb);
	if (ptr == NULL)
		return (NULL);
	ft_bzero(ptr, nmemb * size);
	return (ptr);
}

// void	test_ft_calloc(size_t nmemb, size_t size)
// {
// 	char	*result;

// 	printf("Testing ft_calloc with nmemb = %zu, size = %zu\n", nmemb, size);
// 	result = ft_calloc(nmemb, size);
// 	if (result == NULL)
// 	{
// 		printf("Memory allocation failed.\n");
// 		return ;
// 	}
// 	for (size_t i = 0; i < nmemb * size; i++)
// 	{
// 		if (result[i] != 0)
// 		{
// 			printf("Memory is not initialized to zero.\n");
// 			free(result);
// 			return ;
// 		}
// 	}
// 	free(result);
// 	printf("Test passed.\n");
// }

// int	main(void)
// {
// 	test_ft_calloc(5, sizeof(int));
// 	test_ft_calloc(0, sizeof(int));
// 	test_ft_calloc(5, 0);

// 	return (0);
// }
