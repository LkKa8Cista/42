/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcorreia <lcorreia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/19 16:25:31 by marvin            #+#    #+#             */
/*   Updated: 2024/05/19 16:25:31 by marvin           ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include "libft.h"

/**
 * Returns a pointer to the last element of a linked list.
 *
 * @param lst - Pointer to the first element of the linked list.
 * @return Pointer to the last element of the linked list, or NULL if the list is empty.
 * Finds the last element of the linked list pointed to by lst.
 * Returns a pointer to the last element, or NULL if the list is empty.
 */

t_list	*ft_lstlast(t_list *lst)
{
	if (lst == NULL)
    {
		return (0);
    }
	while (lst)
	{
		if (lst->next == NULL)
        {
			return (lst);
        }
		lst = lst->next;
	}
	return (lst);
}