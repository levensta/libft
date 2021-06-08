#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;
	char	*str;
	char	ch;

	if (n != 0)
	{
		i = -1;
		str = (char *)s;
		ch = (char)c;
		while (++i < n)
			if (str[i] == ch)
				return (&str[i]);
	}
	return (NULL);
}
