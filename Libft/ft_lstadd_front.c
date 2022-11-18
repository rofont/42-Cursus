/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rofontai <rofontai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 16:40:50 by romainfonta       #+#    #+#             */
/*   Updated: 2022/11/18 10:05:16 by rofontai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*FT_LSTADD_FRONT ajoute l’élément ’new’ au début de la liste.*/
void	ft_lstadd_front(t_list **lst, t_list * new)
{
	if (lst && new)
	{
		new->next = *lst;
		*lst = new;
	}
}
