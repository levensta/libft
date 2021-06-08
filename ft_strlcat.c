#include "libft.h"

size_t	ft_strlcat(char *dest, const char *source, size_t n)
{
	size_t	i;
	size_t	j;
	size_t	dest_size;

	i = 0;
	dest_size = ft_strlen(dest);
	j = dest_size;
	if (n == 0)
		return (ft_strlen(source));
	while (j < n - 1 && source[i] != '\0')
	{
		dest[j] = source[i];
		i++;
		j++;
	}
	dest[j] = '\0';
	if (!(dest_size < n))
		dest_size = n;
	return (ft_strlen(source) + dest_size);
}
