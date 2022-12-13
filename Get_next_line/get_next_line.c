/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rofontai <rofontai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/01 09:34:39 by rofontai          #+#    #+#             */
/*   Updated: 2022/12/13 17:04:12 by rofontai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*get_next_line(int fd)
{
	static char	*save;
	char		*line;


	if (fd < 0 || BUFFER_SIZE <= 0 || fd > OPEN_MAX)
		return (0);
	save = ft_read(fd, save);
	line = extract_line(save, '\n');
	if (line && *line == 0)
	{
		free(line);
		return(0);
	}
	save = crop_save(save, '\n');
	return (line);
}

int	main(void)
{
	char	*line;
	int		fd1;
	int		i = 0;
	// int		fd2;
	// int		fd3;
	fd1 = open("file_test.txt", O_RDONLY);
	// fd2 = open("tests/test2.txt", O_RDONLY);
	// fd3 = open("tests/test3.txt", O_RDONLY);
	line = get_next_line(fd1);
	while (line)
	{
		if (i++ == 4)
			break ;
		printf("%s", line);
		printf("%s\n", "-----REUSSI-----");
		free(line);
		line = get_next_line(fd1);
	}
	free(line);
	close(fd1);
	// close(fd2);
	// close(fd3);
	return (0);
}