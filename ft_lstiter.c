/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgorner <pgorner@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 18:42:36 by pgorner           #+#    #+#             */
/*   Updated: 2022/10/25 20:57:08 by pgorner          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	if (ft_lstsize(lst) == 1)
		f(lst->content);
	while (lst->next != NULL)
	{
		f(lst->content);
		lst = lst->next;
	}
}
