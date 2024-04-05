# include "minitalk.h"

int	ft_atoi(char *str)
{
	int	i;
	int	symbol;
	int	outcome;

	i = 0;
	symbol = 1;
	outcome = 0;
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
	{
		i++ ;
	}
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			symbol = symbol * -1;
		i++ ;
	}
	while (str[i] >= '0' && str [i] <= '9')
	{
		outcome = outcome * 10 + (str[i] - 48);
		i++ ;
	}
	return (outcome * symbol);
}
