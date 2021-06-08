#include "libft.h"

void	*ft_memccpy(void *dest, const void *source, int ch, size_t n)
{
	size_t			i;
	unsigned char	*src;
	unsigned char	*dst;
	unsigned char	c;

	i = 0;
	c = (unsigned char)ch;
	dst = (unsigned char *)dest;
	src = (unsigned char *)source;
	if (n > 0)
	{
		while (i < n)
		{
			dst[i] = src[i];
			if (src[i] == c)
				return (&dst[i + 1]);
			i++;
		}
	}
	return (NULL);
}
