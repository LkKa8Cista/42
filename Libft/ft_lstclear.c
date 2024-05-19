/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcorreia <lcorreia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/19 16:33:47 by marvin            #+#    #+#             */
/*   Updated: 2024/05/19 16:33:47 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * Clears a linked list and frees the memory of each element using the provided function.
 *
 * @param lst - Pointer to a pointer to the first element of the linked list.
 * @param del - Pointer to the function used to delete the content of an element.
 * Clears the linked list pointed to by lst and frees the memory of each element.
 * Uses the provided function del to delete the content of each element.
 * Sets the pointer to the first element of the list (lst) to NULL after clearing the list.
 */

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list *temp1;
	t_list *temp2;

	temp1 = *lst;
	while (temp1)
	{
		temp2 = temp1->next;
		ft_lstdelone(temp1, del);
		temp1 = temp2;
	}
	*lst = NULL;
}