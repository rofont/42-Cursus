/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printnb.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rofontai <rofontai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 12:13:57 by rofontai          #+#    #+#             */
/*   Updated: 2022/11/16 12:14:11 by rofontai         ###   ########.fr       */
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

int	ft_print_unsigned (unsigned int n)
{
	unsigned int	temp;

	temp = 0;
	if (n > 9)
	{
		temp += ft_print_unsigned(n / 10);
		n = n % 10;
	}
	if (n >= 0)
		temp += ft_printchar(n + 48);
	return (temp);
}