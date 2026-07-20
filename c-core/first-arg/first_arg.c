#include <unistd.h>
void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
}

int	is_space(char c)
{
	return (c == ' ' || c == '\t');
}

void first_arg(char **argv)
{
	int	i;

	i = 0;
	while (argv[1][i] != '\0' && is_space(argv[1][i]))
		i++;
	while (argv[1][i] != '\0' && !is_space(argv[1][i]))
	{
		write(1, &argv[1][i], 1 );
		i++;
	}
}

int	main(int argc, char **argv)
{
	if (argc > 1)
		first_arg(argv);
	else
		ft_putstr("wrong number of arguments");
	write(1, "\n", 1);
	return (0);
}
