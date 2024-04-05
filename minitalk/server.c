# include "minitalk.h"

int	ft_power(int nb, int power)
{
	int	i;

	i = 1;
	if (nb == 0)
		return (0);
	while (power > 0)
	{
		i = i * nb;
		power--;
	}
	return (i);
}

void ft_write_bits(int signum)
{
    int         bit;
    int         i;
    int         c;
    int         x;

    i = 7;
    c = 0;
    if (signum == SIGUSR1)
       bit = 0;
    else
        bit = 1;
    x = ft_power(2, i);
    printf("\nthis is %d\n", x);
    c = c + (bit * x);
    i--;
    if (i == 0)
    {
        printf("%c\n", c);;
        c = 0;
    }
    

}



int main ()
{
    printf("%d\n", getpid());
    signal(SIGUSR1, ft_write_bits);
    signal(SIGUSR2, ft_write_bits);
    while(1)
    ;
    return(0);
}