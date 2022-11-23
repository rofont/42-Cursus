/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rofontai <rofontai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 08:19:46 by rofontai          #+#    #+#             */
/*   Updated: 2022/11/23 11:50:58 by rofontai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*get_next_line(int fd)
{
	char	*buff;
	int 	temp;


	if (!fd || BUFFER_SIZE < 1)
		return (0);
	buff = malloc(BUFFER_SIZE + 1);
	if (!buff)
		return (0);
	temp = read(fd, buff, BUFFER_SIZE);
	while (temp)
	{
		buff[temp] = '\0';
	}
	return (buff);
