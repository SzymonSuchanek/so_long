/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssuchane <ssuchane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 16:58:56 by ssuchane          #+#    #+#             */
/*   Updated: 2024/03/05 21:19:42 by ssuchane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}

// // Function to compare output of ft_putchar_fd with putchar
// int compare_putchar(char c) {
//     // Redirect stdout to a file descriptor
//     int stdout_fd = dup(1);
//     int pipefd[2];
//     pipe(pipefd);
//     dup2(pipefd[1], 1);

//     // Call ft_putchar_fd
//     ft_putchar_fd(c, 1);
//     close(pipefd[1]);

//     // Read from the pipe
//     char buffer[2];
//     read(pipefd[0], buffer, 1);
//     close(pipefd[0]);

//     // Restore stdout
//     dup2(stdout_fd, 1);
//     close(stdout_fd);

//     // Compare results
//     if (buffer[0] == c) {
//         return 1; // Identical output
//     } else {
//         return 0; // Different output
//     }
// }

// int main() {
//     // Test cases
//     char test_chars[] = {'a', 'b', 'c', '0', '9', ' ', '\n'};
//     int num_test_cases = sizeof(test_chars) / sizeof(test_chars[0]);

//     for (int i = 0; i < num_test_cases; i++) {
//         int result = compare_putchar(test_chars[i]);

//         if (result) {
//             printf("Test passed: ft_putchar_fd output matches 
//		putchar output for character '%c'\n", test_chars[i]);
//         } else {
//             printf("Test failed: ft_putchar_fd output 
//		does not match putchar output for character '%c'\n", test_chars[i]);
//         }
//     }

//     return 0;
// }
