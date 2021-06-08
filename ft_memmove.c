#include "libft.h"

void	*ft_memmove(void *dest, const void *source, size_t n)
{
	size_t	i;
	char	*src;
	char	*dst;

	i = 0;
	dst = (char *)dest;
	src = (char *)source;
	if (!dst && !src)
		return (0);
	if (dst < src)
		return (ft_memcpy(dest, source, n));
	while (n--)
		dst[n] = src[n];
	return (dest);
}
