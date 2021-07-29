/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvaz-da- <lvaz-da-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/27 21:39:40 by mandress          #+#    #+#             */
/*   Updated: 2021/07/28 17:12:25 by lvaz-da-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while ((src[i] != '\0') && (i < n))
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

#include <stdio.h>
int        main(void)
{
    char src[] = "Source string.";
    char dest[] = "Destination string.";
    unsigned int n;

    n = 2;

    printf("BEFORE\n\tsrc: %s\n\tdes: %s\n", src, dest);

    ft_strncpy(dest, src, n);

    printf("AFTER\n\tsrc: %s\n\tdes: %s\n", src, dest);
    return (0);
}


