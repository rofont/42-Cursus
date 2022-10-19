/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romainfontaine <romainfontaine@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 11:04:22 by romainfonta       #+#    #+#             */
/*   Updated: 2022/10/19 09:33:16 by romainfonta      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_isdigit (int c)
{
    if (c >= 48 && c <= 57)
        return (1);
    return (0);
}