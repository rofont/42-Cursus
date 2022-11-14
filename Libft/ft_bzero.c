/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romainfontaine <romainfontaine@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 16:57:32 by romainfonta       #+#    #+#             */
/*   Updated: 2022/11/13 20:34:31 by romainfonta      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*FT_BZERO met à 0 les n premiers octets du bloc pointé par s.*/
void	ft_bzero(void *s, size_t n)
{
	size_t	i;
	char	*temp;

	i = 0;
	if (!s)
		return ;
	temp = (char *)s;
	while (i < n)
	{
		temp[i] = '\0';
		i++;
	}
}
