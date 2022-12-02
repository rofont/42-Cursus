/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rofontai <rofontai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/01 09:34:39 by rofontai          #+#    #+#             */
/*   Updated: 2022/12/02 15:27:00 by rofontai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

void	*get_next_line(int fd)
{
	char	buff [BUFFER_SIZE + 1];
	int		byte;
	static char	*temp;

	byte = read(fd, buff, BUFFER_SIZE);
	ft_putnbr(byte);
	ft_putchar('\n');
	if (search_new_line(buff, '\n') == 0)
	{
		temp = copy_in_stat(buff, BUFFER_SIZE);
		ft_putendl(temp);
		temp = join(temp, buff);
		zero(buff, BUFFER_SIZE);
		ft_putendl(temp);
	}
	else if (search_new_line(buff, '\n') > 0)
	{
		temp = copy_in_stat(buff, BUFFER_SIZE);
		ft_putendl(temp);
		ft_putendl("__REUSSI__");
		temp = join(temp, (copy_in_stat(temp, (search_new_line(buff, '\n')))));
		zero(buff, BUFFER_SIZE);
		ft_putendl(temp);
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

	while (i < 5)
	{
		get_next_line(fd);
		i++;
	}
	return (0);
}
