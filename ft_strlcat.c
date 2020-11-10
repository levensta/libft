/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: levensta <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/01 14:58:03 by levensta          #+#    #+#             */
/*   Updated: 2020/11/10 23:38:55 by levensta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t		ft_strlcat(char *dest, const char *source, size_t n)
{
	size_t i;
	size_t j;
	size_t source_size;
	size_t prikol;

	i = 0;
	j = ft_strlen(dest);
	source_size = ft_strlen((char *)source);
	// if (n == 0)
	// {
	// 	dest[j] = '\0';
	// 	return (0);
	// }
	source_size += j;
	while (source[i] != '\0' && j < n - 1)
	{
		dest[j] = source[i];
		i++;
		j++;
	}
	dest[j] = '\0';
	prikol = (j < n) ? j : n;
	return (source_size + prikol);
}

int main ()
{
	char *s1 = ft_strdup("");
	char s2[] = "toto";
	ft_strlcat(s1,s2,0);
	printf("|%s|", s1);
	return (0);
}