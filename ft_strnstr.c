#include "libft.h"

char	*ft_strnstr(const char *str, const char *to_find, int n)
{
	int		i;
	int		j;
	char	*ptr;

	i = 0;
	ptr = (char *)str;
	if (to_find[0] == '\0')
		return (ptr);
	while (str[i] != '\0' && i < n)
	{
		j = 0;
		while ((to_find[j] == str[i + j]) && (i + j < n))
		{
			j++;
			if (to_find[j] == '\0')
				return (&ptr[i]);
		}
		i++;
	}
	return (NULL);
}
