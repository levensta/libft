#include "libft.h"

int	ft_strncmp(const char *str1, const char *str2, size_t n)
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
		{
			if (s1[i] == '\0' && s2[i] == '\0')
				return (0);
			i++;
		}
		return (s1[i] - s2[i]);
	}
	return (0);
}

int	ft_strcmp(const char *s1, const char *s2)
{
	while (*s1 != '\0' && *s2 != '\0' && *s1 == *s2 && s1++)
		s2++;
	return (*(unsigned char *)s1 - *(unsigned char *)s2);
}
