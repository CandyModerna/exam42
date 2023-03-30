#include <unistd.h>
#include <stdlib.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ulstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			ft_putchar(str[i] - 'a' + 'A');
		}
		else if (str[i] >= 'A' && str[i] <= 'Z')
		{
			ft_putchar(str[i] - 'A' + 'a');
		}
		else
		{
			ft_putchar(str[i]);
		}
		i++;
	}
	ft_putchar('\n');
}

int	main(int argc, char **argv)
{
	if (argc != 2)
	{
		ft_putchar('\n');
		return 1;
	}

	ulstr(argv[1]);
	return (0);
}
