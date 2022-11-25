/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rofontai <rofontai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 08:19:40 by rofontai          #+#    #+#             */
/*   Updated: 2022/11/25 11:20:55 by rofontai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

/*
chercher la première ligne et l'imprimer dans le FD.
int read(int file descriptor, char *zone tampon, intnombre d'octet à lire)
de la zone tampon vers une zone temp
est ce qu'il y a un \n ?
	si oui on place temp jusqu'au \n dans new line et on revoie
	si non on recommence le read
*/
char	*get_next_line(int fd)
{
	char *buff;
	static char *temp;
	char *line;
	int i;
	int j;


	i = 0;
	if (!fd || BUFFER_SIZE <= 0 || (read(fd, buff, 0) < 0))
		return (0);
	while (read(fd, buff, BUFFER_SIZE))
	{
		while (buff[i])
			temp[j++] = buff[i++];
		if (find_new_line(temp, '\n') == -1)
		{
			line = extraction_line(temp, (find_new_line(temp, '\n')));

			free(buff);
		}
	}

	return (line);
}