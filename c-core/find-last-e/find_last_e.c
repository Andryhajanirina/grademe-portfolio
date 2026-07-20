#include <unistd.h>

void find_last_e(char *str)
{
	int	i;
	int last_index;

	i = 0;
	last_index = -1;
	while(str[i] != '\0')
	{
		if (str[i] == 'e')
			last_index = i;
		i++;
	}
	if (last_index != -1)
		write(1, &str[last_index], 1);
}

int	main(int argc, char **argv)
{
	if (argc == 2)
		find_last_e(argv[1]);
	else
		write(1, "e", 1);
	write(1, "\n", 1);
	return (0);
}
