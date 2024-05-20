/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcorreia <lcorreia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/19 16:30:11 by marvin            #+#    #+#             */
/*   Updated: 2024/05/20 11:15:33 by lcorreia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * Adds a new element to the end of a linked list.
 *
 * @param alst - Pointer to a pointer to the first element of the linked list.
 * @param new - Pointer to the new element to be added.
 * @param temp - Temporary pointer to traverse the linked list.
 * 
 * Adds the new element to the end of the linked list.
 * If the linked list is not empty, traverses the list to find the 
 * last element, and then sets the next pointer of the last element to point
 * to the new element.
 * If the linked list is empty, sets the first element of the list to the
 * new element.
 */

void	ft_lstadd_back(t_list **alst, t_list *new)
{
	t_list	*temp;

	if (*alst)
	{
		temp = ft_lstlast(*alst);
		temp->next = &*new;
	}
	else
	{
		*alst = new;
	}
}
