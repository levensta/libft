#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*lst2;
	t_list	*lst3;

	if (lst && *lst && del)
	{
		lst2 = *lst;
		while (lst2)
		{
			lst3 = lst2->next;
			ft_lstdelone(lst2, del);
			lst2 = lst3;
		}
	}
	*lst = 0;
}
