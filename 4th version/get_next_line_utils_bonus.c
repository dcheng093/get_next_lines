/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils_bonus.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcheng <dcheng@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/22 05:09:36 by dcheng            #+#    #+#             */
/*   Updated: 2025/11/26 16:58:24 by dcheng           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line_bonus.h"

int		ft_strlen_gnl(const char *str)
{
	size_t	i;

	i = 0;
	if (!str)
		return (0);
	while (str[i])
		i++;
	return (i);
}

char	*ft_strjoin_gnl(char *prev, char *buffer, ssize_t bytes)
{
	size_t	i;
	ssize_t	j;
	char	*res;

	i = 0;
	if (!buffer)
		return (NULL);
	res = malloc(ft_strlen_gnl(prev) + bytes + 1);
	if (!res)
		return (free(prev), NULL);
	while (prev && prev[i])
	{
		res[i] = prev[i];
		i++;
	}
	j = 0;
	while (j < bytes)
		res[i++] = buffer[j++];
	res[i] = 0;
	return (free(prev), (res));
}

char	*ft_strdup_gnl(char *s)
{
	size_t	i;
	char	*res;

	if (!s)
		return (NULL);
	i = 0;
	res = malloc(ft_strlen_gnl(s) + 1);
	if (!res)
		return (NULL);
	i = 0;
	while (s[i])
	{
		res[i] = s[i];
		i++;
	}
	res[i] = '\0';
	return (res);
}
