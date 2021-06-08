#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	t_list	*lst2;

	if (lst && f)
	{
		lst2 = lst;
		while (lst)
		{
			lst2 = lst->next;
			f(lst->content);
			lst = lst2;
		}
	}
}
