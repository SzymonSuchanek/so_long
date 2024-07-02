/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssuchane <ssuchane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 16:58:56 by ssuchane          #+#    #+#             */
/*   Updated: 2024/03/18 22:46:59 by ssuchane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*str;
	unsigned int	i;
	size_t			ex;

	i = 0;
	ex = ft_strlen(s) - start;
	if (len > ex)
		len = ex;
	if (!s)
		return (NULL);
	if (start > ft_strlen(s))
		return (ft_strdup(""));
	str = (char *)malloc(sizeof(char) * (len + 1));
	if (!str)
		return (NULL);
	while (s[start + i] && i < len)
	{
		str[i] = s[start + i];
		i++;
	}
	str[i] = '\0';
	return (str);
}

// void	ft_print_result(char const *s)
// {
// 	int		len;

// 	len = 0;
// 	while (s[len])
// 		len++;
// 	write(1, s, len);
// }

// int		main(int argc, const char *argv[])
// {
// 	char	str[] = "lorem ipsum dolor sit amet";
// 	char	*strsub;
// 	int		arg;

// 	alarm(5);
// 	if (argc == 1)
// 		return (0);
// 	else if ((arg = atoi(argv[1])) == 1)
// 	{
// 		if (!(strsub = ft_substr(str, 0, 10)))
// 			ft_print_result("NULL");
// 		else
// 			ft_print_result(strsub);
// 		if (str == strsub)
// 			ft_print_result("\nA new string was not returned");
// 	}
// 	else if (arg == 2)
// 	{
// 		if (!(strsub = ft_substr(str, 7, 10)))
// 			ft_print_result("NULL");
// 		else
// 			ft_print_result(strsub);
// 		if (str == strsub)
// 			ft_print_result("\nA new string was not returned");
// 	}
// 	else if (arg == 3)
// 	{
// 		if (!(strsub = ft_substr(str, 7, 0)))
// 			ft_print_result("NULL");
// 		else
// 			ft_print_result(strsub);
// 		if (str == strsub)
// 			ft_print_result("\nA new string was not returned");
// 	}
// 	else if (arg == 4)
// 	{
// 		if (!(strsub = ft_substr(str, 0, 0)))
// 			ft_print_result("NULL");
// 		else
// 			ft_print_result(strsub);
// 		if (str == strsub)
// 			ft_print_result("\nA new string was not returned");
// 	}
// 	else if (arg == 5)
// 	{
// 		char *bullshit;
// 		if (!(strsub = ft_substr(str, 400, 20)))
// 			ft_print_result("NULL");
// 		else
// 		{
// 			bullshit = (char *)&strsub[30];
// 			bullshit = "FULL BULLSHIT";
// 			if (strsub)
// 				ft_print_result(strsub);
// 			else
// 				ft_print_result("rip");
// 		}
// 		if (str == strsub)
// 			ft_print_result("\nA new string was not returned");
// 		(void)bullshit;
// 	}
// 	return (0);
// }