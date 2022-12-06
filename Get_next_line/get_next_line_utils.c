/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rofontai <rofontai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/01 09:35:20 by rofontai          #+#    #+#             */
/*   Updated: 2022/12/06 10:50:09 by rofontai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char *read_copy(int fd, char *str)
{
	char	*buff;
	int		byte;

	buff = malloc(BUFFER_SIZE + 1);
	if (!buff)
		return (0);
	byte = read(fd, buff, BUFFER_SIZE);
	str = join(str, buff);

	return (str);
}

char 	*join(char *s1, char *s2)
{

}