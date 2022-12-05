/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rofontai <rofontai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/01 09:35:20 by rofontai          #+#    #+#             */
/*   Updated: 2022/12/05 15:55:17 by rofontai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	ft_putnbr(int n)
{
	if (n < 0)
	{
		if (n == -2147483648)
			write (1, "-2147483648", 11);
		else
		{
			ft_putchar('-');
			n *= -1;
		}
	}
	if (n > 9)
	{
		ft_putnbr(n / 10);
		n = n % 10;
	}
	if (n >= 0)
		ft_putchar(n + 48);
}

void	ft_putendl(char *s)
{
	int	i;

	i = 0;
	while (s[i])
	{
		ft_putchar(s[i]);
		i++;
	}
	ft_putchar('\n');
}

int	search_new_line(char *str, char c)
{
	int i;

	i = 0;
	while (str[i])
	{
		if (str[i] == c)
			return (i);
		i++;
	}
	return (0);
}

char *join(char *s1, char *s2)
{
	int		i;
	int		j;
	char	*dest;

	i = 0;
	j = 0;
	dest = malloc(lenstr(s1) + lenstr(s2) + 1);
	if (!dest)
		return (0);
	while (s1[i])
	{
		dest[i] = s1[i];
		i++;
	}
	while (s2[j])
	{
		dest[i] = s2[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}

int	lenstr(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*strsub(char *s, unsigned int start, size_t len)
{
	char			*dest;
	size_t			i;
	unsigned int	len_s;

	i = 0;
	len_s = lenstr(s);
	if (start < len_s)
		while (i < len && s[start + i])
			i++;
	dest = (char *)malloc(i + 1);
	if (!dest)
		return (0);
	if (start >= len_s)
	{
		dest[0] = '\0';
		return (dest);
	}
	i = 0;
	while (i < len && s[start + i])
	{
		dest[i] = s[start + i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
