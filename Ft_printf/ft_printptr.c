/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printptr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rofontai <rofontai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 14:57:00 by rofontai          #+#    #+#             */
/*   Updated: 2022/11/18 16:51:05 by rofontai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printptr(void *ptr)
{

}

// static int	ft_ptr_len(unsigned long long num)
// {
// 	int	len;

// 	len = 0;
// 	if (num == 0)
// 		return (3);
// 	while (num != 0)
// 	{
// 		len++;
// 		num = num / 16;
// 	}
// 	return (len + 2);
// }

// static void	ft_ptr(unsigned long long num)
// {
// 	if (num >= 16)
// 	{
// 		ft_ptr(num / 16);
// 		ft_ptr(num % 16);
// 	}
// 	else
// 	{
// 		if (num < 10)
// 			ft_printchar('0' + num);
// 		else
// 			ft_printchar('a' + (num - 10));
// 	}
// }

// int	ft_printptr(unsigned long long ptr)
// {
// 	int	len;

// 	len = 0;
// 	len += ft_printstr("0x");
// 	if (ptr == 0)
// 		len += ft_printchar('0');
// 	else
// 		ft_ptr(ptr);
// 	return (ft_ptr_len(ptr));
// }
