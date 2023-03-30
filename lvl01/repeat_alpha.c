#include <unistd.h>
#include <stdlib.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	checkAlpha(char c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return 1;
	}
	else
	{
		return 0;
	}
}

char	toLower(char c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return c + ('a' - 'A');
	}
	else
	{
		return c;
	}
}

void	repeatAlpha(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (checkAlpha(str[i]))
		{
			int	j;
			int	repeatcount;

			j = 0;
			repeatcount = toLower(str[i]) - 'a'+ 1;
			while (j < repeatcount)
			{
				ft_putchar(str[i]);
				j++;
			}
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
	
	char	*str = argv[1];

	repeatAlpha(str);

	return (0);
}
