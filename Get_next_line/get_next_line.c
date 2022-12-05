/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rofontai <rofontai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/01 09:34:39 by rofontai          #+#    #+#             */
/*   Updated: 2022/12/05 17:02:58 by rofontai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*get_next_line(int fd)
{
	int byte;
	char buff [BUFFER_SIZE + 1];
	static char *temp;
	char *line;
	int i;
	int j;

	i = 0;
	temp = malloc(100000);
	ft_putendl(temp);
	while (search_new_line(buff, '\n') == 0)
	{
		byte = read(fd, buff, BUFFER_SIZE);
		buff [byte] = '\0';
		temp = join(temp, buff);
		// // ft_putendl(temp);
		// ft_putchar('\n');
	}
	j = search_new_line(temp, '\n');
	line = strsub(temp, 0, j + 1);
	line[j] = '\0';
	ft_putendl(line);
	temp = strsub(temp, (search_new_line(temp, '\n') + 1), lenstr(temp) - j);
	ft_putendl(temp);
	return (line);
}


int main (void)
{
	int	fd;
	int i;

	i = 0;
	fd = open("file_test.txt", O_RDONLY);
	if (fd == -1)
		printf("%s", "open error\n");

	while (i < 6)
	{
		get_next_line(fd);
		printf("%s\n", "-----REUSSI-----");
		i++;
	}
	return (0);
}
