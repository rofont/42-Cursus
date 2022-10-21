/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romainfontaine <romainfontaine@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 16:26:10 by romainfonta       #+#    #+#             */
/*   Updated: 2022/10/20 16:57:03 by romainfonta      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void    *ft_memset (void *s, int c, unsigned int len)
{
    int i;
    char *temp;
    
    temp = s;
    i = 0;
    while (i < len)
    {
        temp[i] = c;
        i++;
    }
    return (s);
}
