#include "libft.h"

int	ft_memcmp(const void *str1, const void *str2, size_t n)
{
	size_t			i;
	unsigned char	*s1;
	unsigned char	*s2;

	i = 0;
	s1 = (unsigned char *)str1;
	s2 = (unsigned char *)str2;
	if (n != 0)
	{
		while (s1[i] == s2[i] && i + 1 < n)
			i++;
		return (s1[i] - s2[i]);
	}
	return (0);
}
