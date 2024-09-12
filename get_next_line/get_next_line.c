/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcorreia <lcorreia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/28 15:24:06 by lcorreia          #+#    #+#             */
/*   Updated: 2024/09/12 13:48:31 by lcorreia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*ft_create_string(char *str, char *buff)
{
	char	*temp_str;

	temp_str = ft_strjoin(str, buff);
	if (!temp_str)
		return (free(str), NULL);
	free(str);
	return (temp_str);
}

char	*ft_read_line(int fd, char *str)
{
	char	*buff;
	int		bytes;

	if (!str)
		str = ft_calloc(1, 1);
	buff = ft_calloc(1, BUFFER_SIZE + 1);
	bytes = 1;
	while (bytes > 0)
	{
		bytes = read(fd, buff, BUFFER_SIZE);
		if (bytes <= 0)
			break ;
		buff[bytes] = '\0';
		str = ft_create_string(str, buff);
		if (ft_strchr(str, '\n'))
			break ;
	}
	free(buff);
	if (!str || bytes < 0)
		return (free(str), NULL);
	return (str);
}

char	*ft_create_line(char *buff)
{
	int		ite;
	char	*tempb;

	ite = 0;
	if (!buff[ite])
		return (NULL);
	while (buff[ite] && buff[ite] != '\n')
		ite++;
	tempb = ft_calloc(1, ite + 2);
	ite = 0;
	while (buff[ite] && buff[ite] != '\n')
	{
		tempb[ite] = buff[ite];
		ite++;
	}
	if (buff[ite] == '\n')
		tempb[ite] = '\n';
	return (tempb);
}

char	*ft_clean_line(char *buff)
{
	int		ite;
	int		ite2;
	char	*str;

	ite = 0;
	ite2 = 0;
	while (buff[ite] && buff[ite] != '\n')
		ite++;
	if (!buff[ite])
		return (free(buff), NULL);
	str = ft_calloc(1, ft_strlen(buff) - ite);
	ite++;
	while (buff[ite])
		str[ite2++] = buff[ite++];
	str[ite2] = '\0';
	free(buff);
	return (str);
}

char	*get_next_line(int fd)
{
	static char	*buff;
	char		*line;

	if (fd < 0 || BUFFER_SIZE <= 0)
		return (NULL);
	buff = ft_read_line(fd, buff);
	if (!buff)
		return (NULL);
	line = ft_create_line(buff);
	buff = ft_clean_to_next(buff);
	return (line);
}
