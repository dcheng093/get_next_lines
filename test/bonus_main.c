/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcheng <dcheng@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/22 05:25:15 by dcheng            #+#    #+#             */
/*   Updated: 2025/11/22 05:25:15 by dcheng           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <fcntl.h>
// #include <stdio.h>
// #include <stdlib.h>
// #include "get_next_line_bonus.h"

// int main(void)
// {
//     int fd1 = open("file1.txt", O_RDONLY);
//     int fd2 = open("file2.txt", O_RDONLY);
//     char *line1;
//     char *line2;

//     if (fd1 < 0 || fd2 < 0)
//     {
//         perror("open");
//         return 1;
//     }

//     while (1)
//     {
//         line1 = get_next_line(fd1);
//         line2 = get_next_line(fd2);

//         if (!line1 && !line2)
//             break;

//         if (line1)
//         {
//             int len = 0;
//             while (line1[len] && line1[len] != '\n') len++;
//             printf("FD1: %.*s\n", len, line1);
//             free(line1);
//         }

//         if (line2)
//         {
//             int len = 0;
//             while (line2[len] && line2[len] != '\n') len++;
//             printf("FD2: %.*s\n", len, line2);
//             free(line2);
//         }
//     }

//     close(fd1);
//     close(fd2);
//     return 0;
// }
