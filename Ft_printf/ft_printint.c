/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printint.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rofontai <rofontai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 07:57:25 by rofontai          #+#    #+#             */
/*   Updated: 2022/11/16 09:27:31 by rofontai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_printint(int n)
{
	int temp;


	temp = 0;
	if (n < 0)
	{
		if (n == -2147483648)
		{
			write (1, "-2147483648", 11);
			temp = 11;
		}
		else
		{
			ft_printchar('-');
			n *= -1;
			temp++;
		}
	}
	if (n > 9)
	{
		temp += ft_printint((n / 10));
		n = n % 10;
	}
	if (n >= 0)
		temp += ft_printchar(n + 48);
	return (temp);
}
