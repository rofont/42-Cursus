/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romainfontaine <romainfontaine@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 08:43:01 by romainfonta       #+#    #+#             */
/*   Updated: 2022/10/21 08:53:56 by romainfonta      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void *ft_memcpy(void *dest, void *src, size_t n)
{
    int i;

    i = 0;
    While (i < n)
    {
        dest[i] = src[i];
        i++;
    }
    return (dest);
}