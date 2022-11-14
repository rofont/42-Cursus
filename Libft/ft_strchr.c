/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romainfontaine <romainfontaine@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 15:53:09 by romainfonta       #+#    #+#             */
/*   Updated: 2022/11/13 20:49:21 by romainfonta      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*FT_STRCHR recherche la première occurrence du caractère passé (c)
dans la chaîne de caractères spécifique (s).*/
char	*ft_strchr(const char *s, int c)
{
	int		i;
	char	t;

	i = 0;
	t = c;
	if (!s)
		return (0);
	while (s[i] != t)
	{
		if (s[i] == '\0')
			return (0);
		i++;
	}
	return ((char *)&s[i]);
}
