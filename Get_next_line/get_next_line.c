/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rofontai <rofontai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/01 09:34:39 by rofontai          #+#    #+#             */
/*   Updated: 2022/12/15 11:54:07 by rofontai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

void	*calloc_ptr(size_t count, size_t size)
{
	void	*ptr;

	ptr = malloc(count * size);
	if (!ptr)
		return (0);
	ft_bzero(ptr, (count * size));
	return (ptr);
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

int	lenstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

void	*free_ft(char *str)
{
	if (str)
		free(str);
	return (0);
}

char	*get_next_line(int fd)
{
	static char	*save;
	char		*line;

	if (fd < 0 || BUFFER_SIZE <= 0 || fd > OPEN_MAX)
		return (0);
	save = ft_read(fd, save);
	if (!save)
		return (free_ft(save));
	line = extract_line(save, '\n');
	save = crop_save(save, '\n');
	if (!line)
		return (free_ft(save));
	return (line);
}

// int	main(void)
// {
// 	char	*line;
// 	int		fd1;
// 	// int		fd2;
// 	// int		fd3;
// 	fd1 = open("file_test.txt", O_RDONLY);
// 	// fd2 = open("tests/test2.txt", O_RDONLY);
// 	// fd3 = open("tests/test3.txt", O_RDONLY);
// 	line = get_next_line(fd1);
// 	while (line)
// 	{
// 		// while (*line)
// 		// {
// 		// 	printf("%d:%c\n", *line, *line);
// 		// 	line++;
// 		// }
// 		printf(">%s<", line);
// 		printf("%s\n", "-----REUSSI-----");
// 		free(line);
// 		line = get_next_line(fd1);
// 	}
// 	printf(">%s<", line);
// 	free(line);
// 	close(fd1);
// 	// close(fd2);
// 	// close(fd3);
// 	return (0);
// }