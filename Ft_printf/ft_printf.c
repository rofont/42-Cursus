/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rofontai <rofontai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 12:21:24 by rofontai          #+#    #+#             */
/*   Updated: 2022/11/15 12:52:32 by rofontai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_printf(const char *str, ...)
{
	va_list	args;
	int		nb;
	int		i;

	i = 0;
	nb = 0;
	va_start (args, str);
	while (str[i])
	{
		if (str[i] == '%')
	}


	va_end (args);
	return (nb);
}
