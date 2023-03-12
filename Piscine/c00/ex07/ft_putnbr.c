#include <unistd.h>


/*  we have to create a Function that displays the number entered as a parameter.
	**all possible values**
	1- Positive & Negative
	2- nb < 9 
	   nb > 9 && nb < 100
       nb > 99
*/

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if(nb < 0)
	{
		nb = -nb;
		write(1, "-", 1);
	}
	if(nb > 9 && nb < 100)
	{
		ft_putchar(nb / 10 + '0');
	}
	else if(nb > 99)
	{
		ft_putnbr(nb / 10);
	}
	ft_putchar(nb % 10 + '0');
}

int	main(void)
{
	ft_putnbr(42);
	write(1, &"\n", 1);
}
