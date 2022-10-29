/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romainfontaine <romainfontaine@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 10:15:50 by rofontai          #+#    #+#             */
/*   Updated: 2022/10/29 11:25:18 by romainfonta      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*The atoi() function converts the initial portion of the string pointed to by
str to int representation.*/

int	ft_atoi(const char *str)
{
	int	i;
	int	nb;
	int	neg;

	neg = 1;
	i = 0;
	nb = 0;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			neg *= -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		nb = (nb * 10) + (str[i] - 48);
		i++;
	}
	return (nb * neg);
}
