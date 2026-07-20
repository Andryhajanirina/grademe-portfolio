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

void last_arg(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0' && is_space(str[i]))
		i++;

	while (str[i] != '\0' && !is_space(str[i]))
	{
		write(1, &str[i], 1);
		i++;
	}
}

int	main(int argc, char **argv)
{
	if (argc > 1)
		last_arg(argv[argc - 1]);
	else
		ft_putstr("wrong number of arguments");
	write(1, "\n", 1);
	return (0);
}
