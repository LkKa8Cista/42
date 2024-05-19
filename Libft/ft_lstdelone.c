/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcorreia <lcorreia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/19 16:32:40 by marvin            #+#    #+#             */
/*   Updated: 2024/05/19 16:32:40 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * Deletes the content of a single element in a linked list and frees its memory.
 *
 * @param lst - Pointer to the element to be deleted.
 * @param del - Pointer to the function used to delete the content of the element.
 * Deletes the content of a single element in the linked list pointed to by lst and frees its memory.
 * Uses the provided function del to delete the content of the element.
 * Does nothing if either lst or del is NULL.
 */

void	ft_lstdelone(t_list *lst, void (*del)(void*))
{
	if (!lst || !del)
    {
		return ;
    }
	(del)(lst->content);
	free(lst);
}