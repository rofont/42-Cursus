/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romainfontaine <romainfontaine@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 09:03:28 by romainfonta       #+#    #+#             */
/*   Updated: 2022/10/21 15:31:13 by romainfonta      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int    ft_strlcpy(char *dest, char *src, unsigned int size)
{
    unsigned int    i;

    i = 0;
	if (size < 1)
		return(i);
	while (src[i -1] != '\0' || i <= size)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
    return (i);
}
