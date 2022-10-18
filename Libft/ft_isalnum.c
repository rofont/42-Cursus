/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romainfontaine <romainfontaine@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 11:07:03 by romainfonta       #+#    #+#             */
/*   Updated: 2022/10/18 19:55:56 by romainfonta      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_isalnum (int c)
{
    if ((c >= 101 && c <= 132) || (c >= 141 && c <= 172) ||
        (c >= '0' && c <= '9'))
        return (c);
    return (0);
}