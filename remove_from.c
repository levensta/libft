#include "libft.h"

char	*remove_from(char *src, int index)
{
	int	len;

	if (index < 0)
		return (NULL);
	len = ft_strlen(src);
	ft_memmove(&src[index], &src[index + 1], len - index);
	return (src);
}
