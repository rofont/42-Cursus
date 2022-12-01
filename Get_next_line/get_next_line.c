/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rofontai <rofontai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/01 09:34:39 by rofontai          #+#    #+#             */
/*   Updated: 2022/12/01 11:35:49 by rofontai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

void	*get_next_line(int fd)
{
	char	buff [BUFFER_SIZE + 1];
	int		byte;

	byte = read(fd, buff, BUFFER_SIZE);
	buff[byte] = '\0';
	ft_putnbr(byte);
	ft_putchar('\n');
	ft_putendl(buff);
	if (search_new_line(buff, '\n') == 1)
	{
		ft_putnbr(byte);
		ft_putendl("réussi");
	}
	return (0);
}

int main (void)
{
	int	fd;
	int i;

	i = 0;
	fd = open("file_test.txt", O_RDONLY);
	if (fd == -1)
		printf("%s", "open error\n");

	while (i < 10)
	{
		get_next_line(fd);
		i++;
	}
	return (0);
}
