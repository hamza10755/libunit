/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbelaih <hbelaih@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/20 17:22:53 by hbelaih           #+#    #+#             */
/*   Updated: 2025/01/06 13:33:00 by hbelaih          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_line_allocation(int fd, char *str)
{
	char	*buff;
	ssize_t	size;
	char	*temp;

	buff = malloc(sizeof(char) * (BUFFER_SIZE + 1));
	if (!buff)
		return (NULL);
	while (!ft_strchr(str, '\n'))
	{
		size = read(fd, buff, BUFFER_SIZE);
		if (size == -1)
			return (free(buff), free(str), NULL);
		if (size == 0 && !str[0])
			return (free(buff), free(str), NULL);
		if (size == 0)
			break ;
		buff[size] = '\0';
		temp = ft_strjoin(str, buff);
		free(str);
		str = temp;
	}
	free(buff);
	return (str);
}

char	*ft_next_line(char *str)
{
	size_t	i;
	char	*line;

	i = 0;
	if (!str)
		return (NULL);
	while (str[i] && str[i] != '\n')
		i++;
	line = malloc(sizeof(char) * (i + 1 + !!str[i]));
	if (!line)
		return (NULL);
	i = 0;
	while (str[i] && str[i] != '\n')
	{
		line[i] = str[i];
		i++;
	}
	if (str[i] == '\n')
	{
		line[i] = '\n';
		i++;
	}
	line[i] = '\0';
	return (line);
}

char	*ft_rem_line(char *str)
{
	size_t	i;
	size_t	j;
	char	*new_str;

	i = 0;
	j = 0;
	while (str[i] && str[i] != '\n')
		i++;
	if (!str[i])
	{
		free(str);
		return (NULL);
	}
	new_str = malloc(sizeof(char) * (ft_strlen(str) - i));
	if (!new_str)
		return (NULL);
	i++;
	while (str[i])
	{
		new_str[j] = str[i];
		i++;
		j++;
	}
	new_str[j] = '\0';
	return (free(str), new_str);
}

char	*get_next_line(int fd)
{
	char		*line;
	static char	*str;

	if (BUFFER_SIZE <= 0 || fd < 0)
		return (NULL);
	if (!str)
		str = ft_strdup("");
	str = ft_line_allocation(fd, str);
	if (!str)
		return (NULL);
	line = ft_next_line(str);
	str = ft_rem_line(str);
	return (line);
}
