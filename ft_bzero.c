#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t	i;
	char	*str;

	if (n != 0)
	{
		i = 0;
		str = (char *)s;
		while (i < n)
		{
			str[i] = '\0';
			i++;
		}
	}
}
