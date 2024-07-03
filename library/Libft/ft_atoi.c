/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssuchane <ssuchane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 16:23:36 by ssuchane          #+#    #+#             */
/*   Updated: 2024/03/11 15:35:09 by ssuchane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *nptr)
{
	int	i;
	int	result;
	int	isneg;

	i = 0;
	result = 0;
	isneg = 1;
	if (nptr[i] == 0)
		return (0);
	while ((nptr[i] >= 9 && nptr[i] <= 13) || nptr[i] == ' ')
		i++;
	if (nptr[i] == '-' || nptr[i] == '+')
	{
		if (nptr[i] == '-')
			isneg = -1;
		i++;
	}
	while (nptr[i] >= '0' && nptr[i] <= '9')
	{
		result = result * 10 + (nptr[i] - '0');
		i++;
	}
	return (isneg * result);
}

// int	main(void)
// {
// 	printf("%d\n", ft_atoi("--15"));
// 	printf("%d\n", atoi("--15"));
// }

// void	test_int(const char *input, int expected)
// {
// 	int	result;

// 	result = ft_atoi(input);
// 	if (result == expected)
// 		printf("PASS: '%s' -> %d\n", input, expected);
// 	else
// 		printf("FAIL: '%s' -> Expected: %d, Actual: %d\n", input, expected,
// 			result);
// }

// int	main(void)
// {
// 	test_int("123", 123);
// 	test_int("-456", -456);
// 	test_int("    789", 789);
// 	test_int("-    789", -789);
// 	test_int("789    ", 789);
// 	test_int("  -789  ", -789);
// 	test_int("+123", 123);
// 	test_int("+789", 789);
// 	test_int("-123", -123);
// 	test_int("-789", -789);
// 	test_int("123abc", 123);
// 	test_int("-456def", -456);
// 	test_int("abc123", 0);
// 	test_int("", 0);
// 	return (0);
// }
