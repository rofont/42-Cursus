/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romainfontaine <romainfontaine@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 13:00:09 by romainfonta       #+#    #+#             */
/*   Updated: 2022/10/27 13:35:12 by romainfonta      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	size_t		len_s;
	char		*dest;

	len_s = ft_strlen(s1) + 1;
	dest = (char *)malloc(len_s);
	if (dest == 0)
		return (0);
	return (ft_memcpy(dest, s1, len_s));
}
