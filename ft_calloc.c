/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgorner <pgorner@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 15:57:12 by pgorner           #+#    #+#             */
/*   Updated: 2022/10/22 15:39:11 by pgorner          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* FUNCTION EXPLANATION: 
** Function creates an array with elements that are initialized to 0
**
** Return value:
** Returns the array
*/

#include <stddef.h>
#include <stdlib.h>

void	*ft_calloc(size_t count, size_t size)
{
	char	*memory;
	size_t	i;

	i = 0;
	memory = malloc(count * size);
	if (SIZE_MAX / size < count)
		return (NULL);
	if (memory == NULL)
		return (NULL);
	while (i < count * size)
	{
		memory[i] = 0;
		i++;
	}
	return (memory);
}
