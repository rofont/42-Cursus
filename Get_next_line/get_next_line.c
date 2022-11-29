/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rofontai <rofontai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 08:19:40 by rofontai          #+#    #+#             */
/*   Updated: 2022/11/28 14:01:12 by rofontai         ###   ########.fr       */
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
	char	*buff;

	if (!fd || BUFFER_SIZE <= 0 || (read(fd, buff, 0) < 0))
		return (0);
	/*
	1-faire appelle à Read
	2-copie le buff de read dans un temporaire
	3-analyser le temporaire si \n
		Si \n = alors recopier jusqu'au \n dans la str à renvoyer
			effacer le temporaire jusqu'au \n compris
		Si pas de \n alors refaire appelle à read.
			copie le buff à la suite dans temporaire
	*/

}