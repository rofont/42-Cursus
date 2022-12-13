/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rofontai <rofontai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/01 09:35:20 by rofontai          #+#    #+#             */
/*   Updated: 2022/12/13 17:02:38 by rofontai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char *ft_read(int fd, char *save)
{
	char	*buff;
	int		byte;

	if (!save)
		save = calloc_ptr(sizeof(char), 1);
	buff = calloc_ptr(sizeof(char), BUFFER_SIZE + 1);
	if (!buff)
		return (0);
	byte = 1;
	while(search_nline(save, '\n') == 0 && byte != 0)
	{
		byte = read(fd, buff, BUFFER_SIZE);
		if (byte == -1)
		{
			free(buff);
			free(save);
			return (0);
		}
		if (byte > 0)
			save = join(save, buff);
		ft_bzero(buff, BUFFER_SIZE + 1);
	}
	free(buff);
	return (save);
}

void *calloc_ptr(size_t count, size_t size)
{
		void	*ptr;

	ptr = malloc(count * size);
	if (!ptr)
		return (0);
	ft_bzero(ptr, (count * size));
	return (ptr);
}

char *join(char *save, char *buff)
{
	int i;
	int j;
	char *dest;

	i = 0;
	j = 0;
	dest = calloc_ptr(sizeof(char), (lenstr(save) + lenstr(buff) + 1));
	if (!dest)
		return (0);
	while (save[i])
	{
		dest[i] = save[i];
		i++;
	}
	while (buff[j])
	{
		dest[i] = buff[j];
		i++;
		j++;
	}
	free(save);
	return (dest);
}

int lenstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int search_nline(char *save, char c)
{
	int i;

	i = 0;
	while (save[i])
	{
		if (save[i] == c)
			return (i);
		i++;
	}
	return (0);
}

char *extract_line(char *save, char c)
{
	int i;
	char *dest;

	i = 0;
	if (!save)
		return (0);
	while ( save[i])
		if (save[i++] == c)
			break;
	dest = calloc_ptr(sizeof(char), i + 1);
	if (!dest)
		return(0);
	i = 0;
	while (save[i] && save[i] != c)
	{
		dest[i] = save[i];
		i++;
	}
	if (save[i] == c)
	{
		dest[i] = save[i];
		i++;
	}
	return (dest);
}

char *crop_save(char *save, char c)
{
	int		i;
	int		start;
	int		len;
	char	*dest;

	i = 0;
	start = 0;
	if (!save)
		return (0);
	while (save[start] && save[start] != c)
		start++;
	if (save[start] == c)
		start++;
	len = (lenstr(save) - start);
	dest = calloc_ptr(sizeof(char), len + 1);
	if (!dest)
		return (0);
	while (i <= len && save[start + i])
	{
		dest[i] = save[start + i];
		i++;
	}
	free(save);
	return (dest);
}

void	ft_bzero(void *s, size_t n)
{
	size_t	i;
	char	*temp;

	if (!s)
		return ;
	i = 0;
	temp = (char *)s;
	while (i < n)
	{
		temp[i] = '\0';
		i++;
	}
}