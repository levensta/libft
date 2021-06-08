#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	unsigned int	start;
	size_t			len;

	start = 0;
	if (!s1 || !set)
		return (NULL);
	len = ft_strlen(s1);
	while (start < len && ft_memchr(set, s1[start], ft_strlen(set)) != NULL)
		start++;
	while (len > 0 && ft_memchr(set, s1[len - 1], ft_strlen(set)) != NULL)
		len--;
	if (len <= start)
		return (ft_strdup(""));
	return (ft_substr(s1, start, len - start));
}
