/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romainfontaine <romainfontaine@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 16:05:36 by rofontai          #+#    #+#             */
/*   Updated: 2022/11/11 22:45:00 by romainfonta      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*FT_LSTMAP itère sur la liste ’lst’ et applique la fonction ’f’au contenu
de chaque élément. Crée une nouvelle liste résultant des applications
successives de ’f’. La fonction ’del’ est là pour détruire
le contenu d’un élément si nécessaire.*/
t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new;
	t_list	*temp;

	new = NULL;
	if (!lst || !f || !del)
		return (NULL);
	while (lst)
	{
		temp = ft_lstnew((*f)(lst->content));
		if (!temp)
		{
			ft_lstclear(&new, del);
			return (new);
		}
		ft_lstadd_back(&new, temp);
		lst = lst->next;
	}
	return (new);
}
