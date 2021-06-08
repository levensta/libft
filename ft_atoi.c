#include "libft.h"

int	is_whitespaces(char c)
{
	return (c == ' ' || c == '\t' || c == '\n' \
	|| c == '\v' || c == '\r' || c == '\f');
}

int	check_numlen(int amount, int flag)
{
	if (amount > 19)
	{
		if (flag > 0)
			return (-1);
		else
			return (0);
	}
	return (1);
}

int	check_symbol(char c, int *i, int *flag)
{
	if (c == '+')
		(*i)++;
	else if (c == '-')
	{
		*flag = -1;
		(*i)++;
	}
	return (0);
}

int	ft_atoi(const char *str)
{
	int	i;
	int	nb;
	int	flag;
	int	amount;

	i = 0;
	nb = 0;
	flag = 1;
	amount = 0;
	while (is_whitespaces(str[i]))
		i++;
	check_symbol(str[i], &i, &flag);
	while (ft_isdigit(str[i]))
	{
		nb = (nb * 10) + (str[i] - '0');
		if (nb != 0)
			amount++;
		if (check_numlen(amount, flag) != 1)
			return (check_numlen(amount, flag));
		i++;
	}
	if (str[i] && !ft_isdigit(str[i]))
		return (-1);
	return (nb * flag);
}
