/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcorreia <lcorreia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/19 16:37:42 by marvin            #+#    #+#             */
/*   Updated: 2024/05/19 16:37:42 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * Creates a new list resulting from applying the given function to each element of the original list.
 *
 * @param lst - Pointer to the first element of the original list.
 * @param f - Pointer to the function to apply to each element of the original list.
 * @param del - Pointer to the function to delete the content of an element in case of an error.
 * @return Pointer to the first element of the new list, or NULL if an error occurs.
 * Creates a new list resulting from applying the function f to each element of the original list lst.
 * If the original list is empty or any of the function pointers is NULL, returns NULL.
 * Otherwise, applies the function f to each element, creates a new element with the result,
 * and links them together to form the new list.
 * If an error occurs during memory allocation, the function deletes the new list and returns NULL.
 */

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list *temp_list;
	t_list *saved;

	if (!lst || !f || !del)
		return (0);
	temp_list = ft_lstnew(f(lst->content));
	if (!temp_list)
		return (0);
	saved = temp_list;
	lst = lst->next;
	while (lst)
	{
		temp_list->next = ft_lstnew(f(lst->content));
		if (!temp_list->next)
		{
			ft_lstclear(&saved, del);
			return (0);
		}
		temp_list = temp_list->next;
		lst = lst->next;
	}
	temp_list->next = NULL;
	return (saved);
}