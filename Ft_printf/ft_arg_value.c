/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_arg_value.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rofontai <rofontai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 12:52:48 by rofontai          #+#    #+#             */
/*   Updated: 2022/11/15 14:50:00 by rofontai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_arg_value(va_list arg, char c)
{
	int	temp;

	temp = 0;
	if (c == '%')
		temp  += ft_printchar(c);
	else if (c == 's')
		temp += ft_printstr(va_arg(arg, char *));
	return (temp);
}