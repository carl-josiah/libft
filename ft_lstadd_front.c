/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccastro <ccastro@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/21 18:44:32 by ccastro           #+#    #+#             */
/*   Updated: 2024/08/21 22:34:15 by ccastro          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (!new)
		return ;
	new->next = *lst;
	*lst = new;
}

// int main(void) 
// {
//     // Simple test cases to validate your functions
//     t_list *head = NULL;
//     t_list *new_node = ft_lstnew("Hello");
//     ft_lstadd_front(&head, new_node);

//     // Add more tests here if needed

//     return 0;
// }
