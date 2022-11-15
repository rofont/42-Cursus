/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rofontai <rofontai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 12:38:34 by rofontai          #+#    #+#             */
/*   Updated: 2022/11/15 14:42:47 by rofontai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFTPRINTF_H
# define LIBFTPRINTF_H

#include <unistd.h>
#include <stdarg.h>

int	ft_printf(const char *str, ...);
int	ft_printchar(char c);
int	ft_arg_value(va_list arg, char c);
int	ft_printstr(char const *str);


#endif
