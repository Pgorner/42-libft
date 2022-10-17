/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgorner <pgorner@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 11:02:56 by pgorner           #+#    #+#             */
/*   Updated: 2022/10/17 18:10:19 by pgorner          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* FUNCTION EXPLANATION: 
** Function searches at most n characters to locate the first occurrence in the string pointed 
** to by big of the sequence of characters (excluding the terminating null character) in the 
** string pointed to by little.
** 
** Return values:
** 0				||  string not found
** pointer to the located string if it was found
** returns big if little is empty
*/ 

int ft_strnstr(const char *big, const char *little, size_t n)
{
    size_t i;
    size_t j;

    i = 0;
    if (*little == NULL)
        return ((char*)big);

    while (big[i] != NULL && little[i] != NULL && i <= n) //while big isnt done and little isnt done and index is smaller than n
    {
        j = 0;
        while ((big[i + j] == little [i]) && (little[j] != NULL) && (i + j < n)) //if big equals little at the point while it still has not surpassed the counter of i + j
        {
            j++;
        }
        if (j == ft_strlen(little))
        (
            return ((char*)big);
        )
        i++;
    }
    return (NULL);
}