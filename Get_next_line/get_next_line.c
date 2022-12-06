/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rofontai <rofontai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/01 09:34:39 by rofontai          #+#    #+#             */
/*   Updated: 2022/12/06 10:43:22 by rofontai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*get_next_line(int fd)
{
	static char	*temp;
	char		*line;

	if (!fd || BUFFER_SIZE <= 0)
		return (0);

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
	while (i < 4)
	{
		printf("%s\n", get_next_line(fd));
		printf("%s\n", "-----REUSSI-----");
		i++;
	}
	return (0);
}
