#include <unistd.h>

void	ft_putchar( char c)
{
	write(1, &c, 1);
}

void	ft_print_comb2(void)
{
	char a;
	char b;
	a = 0;

	while (a <= 98)
	{
		b = a + 1;
		while (b <= 99)
		{
			ft_putchar(a / 10 + '0');
			ft_putchar(a % 10 + '0');
			ft_putchar(' ');
			ft_putchar(b/10 + '0');
			ft_putchar(b % 10 + '0');
			if (a != 98)
				write(1, &", ", 2);
			b++;
		}
		a++;
	}
}

int main(void)
{
	ft_print_comb2();
	write(1, &"\n", 1);
}
