/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssuchane <ssuchane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 16:58:56 by ssuchane          #+#    #+#             */
/*   Updated: 2024/03/18 19:32:11 by ssuchane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_count(int n)
{
	int	count;

	count = 0;
	if (n < 0)
	{
		n = -n;
		count++;
	}
	while (n > 0)
	{
		count++;
		n = n / 10;
	}
	return (count);
}

static char	*ft_putnbr(char *str, int n, int digitcount)
{
	int	i;

	i = 0;
	if (n < 0)
	{
		str[0] = '-';
		n = -n;
	}
	while (n != 0)
	{
		str[digitcount - 1 - i] = n % 10 + '0';
		n = n / 10;
		i++;
	}
	return (str);
}

char	*ft_itoa(int n)
{
	int		digitcount;
	char	*str;

	digitcount = ft_count(n);
	if (n == 0)
		return (ft_strdup("0"));
	str = (char *)malloc(sizeof(char) * (digitcount + 1));
	if (!str)
		return (NULL);
	str[digitcount] = '\0';
	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	return (ft_putnbr(str, n, digitcount));
}

// #include <string.h>

// void	test_ft_itoa(int n, char *expected)
// {
// 	char	*result;

// 	result = ft_itoa(n);
// 	if (strcmp(result, expected) == 0)
// 	{
// 		printf("Test Passed: ft_itoa(%d) = \"%s\"\n", n, expected);
// 	}
// 	else
// 	{
// 		printf("Test Failed: ft_itoa(%d) expected \"%s\" but got \"%s\"\n", n,
// 			expected, result);
// 	}
// 	free(result); // Freeing memory allocated by ft_itoa
// }

// int	main(void)
// {

// 	test_ft_itoa(0, "0");
// 	test_ft_itoa(123, "123");
// 	test_ft_itoa(-123, "-123");
// 	test_ft_itoa(2147483647, "2147483647");
// 	test_ft_itoa(-2147483648, "-2147483648");
// 	return (0);
// }
