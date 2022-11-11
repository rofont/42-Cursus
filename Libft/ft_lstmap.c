/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rofontai <rofontai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 16:05:36 by rofontai          #+#    #+#             */
/*   Updated: 2022/11/11 16:53:28 by rofontai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*FT_LSTMAP itère sur la liste ’lst’ et applique la fonction ’f’au contenu
de chaque élément. Crée une nouvelle liste résultant des applications
successives de ’f’. La fonction ’del’ est là pour détruire
le contenu d’un élément si nécessaire.*/
t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*temp;

	if (!lst)
		return ;
	while (lst)
	{
		if (del)
			del(lst->content);
		f(lst->content);
		lst = lst->next;
	}
}