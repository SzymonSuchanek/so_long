/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssuchane <ssuchane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 16:58:56 by ssuchane          #+#    #+#             */
/*   Updated: 2024/03/14 14:29:50 by ssuchane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	is_set(char c, char const *set)
{
	while (*set)
	{
		if (*set++ == c)
			return (1);
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char		*trimmed_str;
	int			trimmed_len;
	const char	*start;
	const char	*end;

	end = s1 + ft_strlen(s1) - 1;
	start = s1;
	if (!s1 || !set)
		return (NULL);
	while (*start && is_set(*start, set))
		start++;
	while (end > start && is_set(*end, set))
		end--;
	trimmed_len = end - start + 1;
	trimmed_str = (char *)malloc(sizeof(char) * (trimmed_len + 1));
	if (!trimmed_str)
		return (NULL);
	ft_strlcpy(trimmed_str, start, trimmed_len + 1);
	trimmed_str[trimmed_len] = '\0';
	return (trimmed_str);
}

// int	main(void)
// {
// 	char	ptr[] = "AAAAABtedsdstAAAAAB";
// 	char	set[] = "AB";

// 	printf("%s", ft_strtrim(ptr, set));
// 	return (0);
// }

// #include <string.h>

// int main()
// {
//     // Test case 1
//     char *s1 = "   Hello, world!   ";
//     char *set = " ";
//     char *expected_output = "Hello, world!";
//     char *result = ft_strtrim(s1, set);
//     printf("Test case 1: %s\n", 
//		strcmp(result, expected_output) == 0 ? "PASS" : "FAIL");
//     free(result);

//     // Test case 2
//     s1 = "   ";
//     set = " ";
//     expected_output = "";
//     result = ft_strtrim(s1, set);
//     printf("Test case 2: %s\n", 
//		strcmp(result, expected_output) == 0 ? "PASS" : "FAIL");
//     free(result);

//     // Test case 3
//     s1 = "Hello, world!";
//     set = " ";
//     expected_output = "Hello, world!";
//     result = ft_strtrim(s1, set);
//     printf("Test case 3: %s\n", 
//		strcmp(result, expected_output) == 0 ? "PASS" : "FAIL");
//     free(result);

//     // Test case 4
//     s1 = "";
//     set = "";
//     expected_output = "";
//     result = ft_strtrim(s1, set);
//     printf("Test case 4: %s\n", 
//		strcmp(result, expected_output) == 0 ? "PASS" : "FAIL");
//     free(result);

//     // Test case 5
//     s1 = "a";
//     set = "a";
//     expected_output = "";
//     result = ft_strtrim(s1, set);
//     printf("Test case 5: %s\n", 
//		strcmp(result, expected_output) == 0 ? "PASS" : "FAIL");
//     free(result);

//     return 0;
// }