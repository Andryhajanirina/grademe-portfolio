#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnumber(int n)
{
	long	nb;

	nb = n;
	if (nb >= 10)
		ft_putnumber(nb / 10);
	ft_putchar((nb % 10) + '0');
}

void countdown()
{
	int	nb;

	nb = 9;
	while (nb >= 0)
	{
		ft_putnumber(nb);
		nb--;
	}
	write(1, "\n", 1);
}

int	main(int argc, char **argv)
{
	(void)argc;
	(void)argv;
	countdown();
	return (0);
}
