/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgorner <pgorner@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 15:57:12 by pgorner           #+#    #+#             */
/*   Updated: 2022/10/18 12:36:20 by pgorner          ###   ########.fr       */
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

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*ptr;

	ptr = (unsigned char *)s;
	while (n-- > 0)
	{
		*(ptr++) = 0;
	}
}

void	*ft_calloc(size_t count, size_t size)
{
	void	*ptr;

	ptr = malloc(count * size);
	if (ptr == 0)
		return (ptr);
	ft_bzero(ptr, size * count);
	return (ptr);
}
