#include "libft.h"

char	*insert_into(char *src, char *add, int index)
{
	char	*dst;
	int		src_len;
	int		add_len;

	src_len = ft_strlen(src);
	add_len = ft_strlen(add);
	dst = (char *)malloc((src_len + add_len + 1) * sizeof(char));
	if (dst == NULL)
		return (NULL);
	ft_memset(dst, 0, src_len + add_len + 1);
	ft_strlcpy(dst, src, index + 1);
	ft_strlcpy(&dst[index], add, add_len + 1);
	ft_strlcpy(&dst[index + add_len], &src[index], src_len - index + 1);
	free(src);
	return (dst);
}
