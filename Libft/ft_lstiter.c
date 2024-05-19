/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcorreia <lcorreia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/19 16:35:23 by marvin            #+#    #+#             */
/*   Updated: 2024/05/19 16:35:23 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * Iterates through a linked list and applies a function to each element's content.
 *
 * @param lst - Pointer to the first element of the linked list.
 * @param f - Pointer to the function to be applied to each element's content.
 * Iterates through the linked list pointed to by lst.
 * Applies the provided function f to the content of each element.
 * Does nothing if either lst or f is NULL.
 */

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	if (!lst || !f)
    {
		return ;
    }
	while (lst)
	{
		f(lst->content);
		lst = lst->next;
	}
}