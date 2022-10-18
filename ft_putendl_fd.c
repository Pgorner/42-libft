/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgorner <pgorner@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 23:01:31 by pgorner           #+#    #+#             */
/*   Updated: 2022/10/18 23:22:33 by pgorner          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

unsigned int	ft_strlen(const char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

void	ft_putendl_fd(char *s, int fd)
{
	char	*str;

	str = (char *)malloc(sizeof(*s) * (ft_strlen(s) + 1));
	write(fd, str, (ft_strlen(s)+2));
}
