/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcorreia <lcorreia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/19 16:16:42 by marvin            #+#    #+#             */
/*   Updated: 2024/05/20 11:22:41 by lcorreia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * Creates a new list element with the specified content.
 *
 * @param content - Pointer to the content to be added to the new element.
 * @return Pointer to the newly created list element, or NULL if memory 
 * allocation fails.
 * 
 * Creates a new list element with the specified content.
 * Allocates memory for the new element and initializes its content and 
 * next pointer.
 * Returns a pointer to the newly created list element.
 */

t_list	*ft_lstnew(void *content)
{
	t_list	*lst;

	lst = (t_list *) malloc(sizeof(*lst));
	if (!lst)
	{
		return (NULL);
	}
	lst->content = content;
	lst->next = NULL;
	return (lst);
}
