#include <unistd.h>

void	alpha_pairs(void)
{
	int	i;
	char base_char;

	i = 0;
	while (i < 26)
	{
		if (i % 2 == 0)
			base_char = 'a' + i;
		else
			base_char = 'A' + i;
		i++;
		write(1, &base_char, 1);
		write(1, &base_char, 1);
	}
	write(1, "\n", 1);
}

int	main(int argc, char **argv)
{
	(void)argc;
	(void)argv;
	alpha_pairs();
	return (0);
}
