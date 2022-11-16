/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_arg_value.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rofontai <rofontai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 12:52:48 by rofontai          #+#    #+#             */
/*   Updated: 2022/11/16 13:00:35 by rofontai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_arg_value(va_list arg, char c)
{
	int	temp;

	temp = 0;
	if (c == '%')
		temp  += ft_printchar(c);
	else if (c == 'c')
		temp += ft_printchar(va_arg(arg, int));
	else if (c == 's')
		temp += ft_printstr(va_arg(arg, char *));
	else if (c == 'i' || c == 'd')
		temp += ft_printint(va_arg(arg, int));
	else if (c == 'u')
		temp += ft_print_unsigned(va_arg(arg, unsigned int));
	else if (c == 'x')
		temp += ft_print_up_base(va_arg(arg, ));
	return (temp);
}
