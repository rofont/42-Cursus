/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rofontai <rofontai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 07:57:35 by rofontai          #+#    #+#             */
/*   Updated: 2022/11/29 11:47:05 by rofontai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

#define BUFFER_SIZE 5

//cherche si il y a \n dasn la string.
//si oui retourne 1 sinon retourne 0.
int	search_newline(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] = '\n')
			return (1);
		i++;
	}
	return (0);
}

//compte la taille de la string;
int	strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

//ajoute s2 à s1 en allouant la memoire necessaire.
//retourne l'addition des 2 strings.
char	*add_tosave(char *s1, char *s2)
{
	int		i;
	int 	j;
	char	*dest;

	i = 0;
	j = 0;
	dest = malloc(strlen(s1) + strlen(s2) + 1);
	if (!dest)
		return (0);
	while (s1[i])
	{
		dest[i] = s1[i];
		i++;
	}
	while (s2[j])
	{
		dest[i] = s2[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);

}




char	*get_next_line(int fd)
{
	static char	*save;
	char		*line;
	char		*buff;
	int			byte;


// check si tout va bien
	if (!fd || BUFFER_SIZE <=0 || read(fd, line, 0) < 0)
		return (0);


// alloue l,espace necessaire à buff
	buff = malloc(sizeof(char) * BUFFER_SIZE + 1);
	if (!buff)
		return (0);


// lire dans le fichier tant que je ne trouve pas de \n ou que je n'arrive pas à la fin de mon fichier
	while (!search_newline(save) && byte != 0)
	{
		byte = read(fd, buff, BUFFER_SIZE);
		buff[byte] = '\0';
		save = add_tosave(save, buff);

	}






	return (line);
}