/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcorreia <lcorreia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/19 16:21:12 by marvin            #+#    #+#             */
/*   Updated: 2024/05/19 16:21:12 by marvin           ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include "libft.h"

/**
 * Adds a new element to the beginning of a linked list.
 *
 * @param alst - Pointer to a pointer to the first element of the linked list.
 * @param new - Pointer to the new element to be added.
 * Adds the new element to the beginning of the linked list.
 * If either alst or new is NULL, the function returns without making any changes.
 * Otherwise, the next pointer of the new element is set to point to the current first element.
 * Then, the pointer to the first element of the linked list (alst) is updated to point to the new element.
 */

void    ft_lstadd_front(t_list **alst, t_list *new)
{
    if (!alst || !new)
    {
		return ;
    }
	new->next = *alst;
	*alst = new;
}