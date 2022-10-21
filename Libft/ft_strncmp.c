/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romainfontaine <romainfontaine@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 16:30:38 by romainfonta       #+#    #+#             */
/*   Updated: 2022/10/21 16:46:35 by romainfonta      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_strncmp(char *s1, char *s2, unsigned int n)
{
    unsigned int i;

    i = 0;
    while (i < n && (s1[i] != '\0' || s2[i] != '\0'))
    {
        if ((s1[i] > s2[i]) || (s1[i] < s2[i]))
            return (s1[i] - s2[i]);
        i++;
    }
    return (0);
}