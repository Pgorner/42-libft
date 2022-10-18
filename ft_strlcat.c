/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgorner <pgorner@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 10:10:28 by pgorner           #+#    #+#             */
/*   Updated: 2022/10/18 12:58:51 by pgorner          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* FUNCTION EXPLANATION: 
** Function appends the NUL-terminated string src to the end of dst. 
** It will append at most size - strlen(dst) - 1 bytes, NUL-terminating 
** the result.
*/

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	dst_size;
	unsigned int	src_size;
	unsigned int	result;

	dst_size = 0;
	while (dest[dst_size] != '\0')
		++dst_size;
	src_size = 0;
	while (src[src_size] != '\0')
		++src_size;
	result = src_size;
	if (size <= dst_size)
		result += size;
	else
		result += dst_size;
	src_size = 0;
	while (src[src_size] != '\0' && dst_size + 1 < size)
	{
		dest[dst_size] = src[src_size];
		dst_size++;
		src_size++;
	}
	dest[dst_size] = '\0';
	return (result);
}
