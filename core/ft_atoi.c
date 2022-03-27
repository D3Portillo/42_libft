

#include <limits.h>

int	ft_isdigit(int c);

static int	is_space(char c)
{
	if (c == '\t' || c == '\n'
		|| c == '\v' || c == '\f'
		|| c == '\r' || c == ' ')
		return (1);
	return (0);
}

int	ft_atoi(const char *str)
{
	long long int	result;
	int				multiplier;

	multiplier = 1;
	result = 0;
	while (is_space(*str))
		++str;
	if (*str == '-')
		multiplier = -1;
	if (*str == '-' || *str == '+')
		++str;
	while (ft_isdigit(*str))
	{
		result = (result * 10) + (*str++ - '0');
		if ((result - LONG_MAX) > 0)
		{
			if (multiplier)
				return (-1);
			return (0);
		}
	}
	return (result * multiplier);
}
