#include <unistd.h>
#include <stdlib.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	getFirst(char *str)
{
	int	i;
	
	i = 0;
	while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n')
	{
		i++;
	}

	while (str[i] != '\0' && str[i] != ' ' && str[i] != '\n' && str[i] != '\t')
	{
		ft_putchar(str[i]);
		i++;
	}
	ft_putchar('\n');
}

int	main(int argc, char **argv)
{
	if (argc != 2)
	{
		ft_putchar('\n');
	}
	
	getFirst(argv[1]);
	return (0);
}
