/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romainfontaine <romainfontaine@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/01 09:34:39 by rofontai          #+#    #+#             */
/*   Updated: 2022/12/07 20:58:14 by romainfonta      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

size_t	lenstr(const char *s)
{
	int	i;

	i = 0;
	if (!s)
		return (0);
	while (s[i] != '\0')
		i++;
	return (i);
}

char	*get_next_line(int fd)
{
	static char	*temp;
	char		*line;

	if (fd < 0 || BUFFER_SIZE <= 0)
		return (0);
	temp = read_copy(fd, temp);
	if (!temp)
		return (0);
	line = extract_line(temp);
	temp = clear_temp(temp);
	return (line);
}

// int main (void)
// {
// 	int	fd;
// 	int i;
// 	char *line;

// 	i = 0;
// 	fd = open("file_test.txt", O_RDONLY);
// 	if (fd == -1)
// 		printf("%s", "open error\n");
// 	while (i < 11)
// 	{
// 		line = get_next_line(fd);
// 		printf("%s", line);
// 		printf("%s\n", "-----REUSSI-----");
// 		i++;
// 	}
// 	return (0);
// }
