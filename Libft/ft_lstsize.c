/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcorreia <lcorreia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/19 16:24:20 by marvin            #+#    #+#             */
/*   Updated: 2024/05/20 11:15:55 by lcorreia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * Counts the number of elements in a linked list.
 *
 * @param lst - Pointer to the first element of the linked list.
 * @return The number of elements in the linked list.
 * 
 * Iterates through the linked list pointed to by lst and counts the number 
 * of elements.
 * Returns the total count of elements in the linked list.
 */

int	ft_lstsize(t_list *lst)
{
	int		ite;

	ite = 0;
	while (lst)
	{
		lst = lst->next;
		ite++;
	}
	return (ite);
}
