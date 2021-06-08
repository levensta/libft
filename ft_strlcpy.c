#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *source, size_t n)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (dest == NULL || source == NULL)
		return (0);
	while (source[j] != '\0')
		j++;
	if (n > 0)
	{
		while (source[i] != '\0' && i < n - 1)
		{
			dest[i] = source[i];
			i++;
		}
		dest[i] = '\0';
	}
	return (j);
}
