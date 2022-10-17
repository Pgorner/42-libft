/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgorner < pgorner@student.42heilbronn.d    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 11:02:56 by pgorner           #+#    #+#             */
/*   Updated: 2022/10/17 11:02:56 by pgorner          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

ft_strstr(const char *big, const char *little, size_t n);
{
    int i;

    i = 0;

    if (*little == NULL)
        return (*big);
    

    while( *big[i] != '/0' && *little[i] != '/0' && i <= n)
        if (*big[i] == *little [i])
            while (*big[i] == *little [i])
                i++;
                if (little[i] == '/0')
                    return 

}