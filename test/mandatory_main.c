/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mandatory_main.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcheng <dcheng@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/26 16:27:25 by dcheng            #+#    #+#             */
/*   Updated: 2025/11/26 16:27:25 by dcheng           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <fcntl.h>
// #include <stdio.h>
// #include "get_next_line.h"

// int main(void)
// {
//     int fd = open("get_next_line_utils.c", O_RDONLY);
//     char *line;

//     if (fd < 0)
//         return (1);

//     while ((line = get_next_line(fd)))
//     {
//         printf("%s", line);
//         free(line);
//     }

//     close(fd);
//     return (0);
// }