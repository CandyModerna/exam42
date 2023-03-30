#include <unistd.h>
#include <stdbool.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

bool	isUpper(char u)
{
	return (u >= 'A' && u <= 'Z');
}

bool	isLower(char l)
{
	return (l >= 'a' && l <= 'z');
}

char	incrementBy13(char c)
{
	unsigned char	incremented;
	char	end;

	if(isLower(c))
		end = 'z';
	else
		end = 'Z';

	incremented = c + 13;
	if (incremented > end)
		incremented -= 26;
	return incremented;
}

void	rot_13(char *str)
{
	while (*str)
	{
		if (isLower(*str) || isUpper(*str))
			*str = incrementBy13(*str);
		write(1, str, 1);
		str++;
	}
}

int	main(int argc, char *argv[])
{
	if (argc != 2)
	{
		ft_putchar('\n');
		return 1;
	}
	rot_13(argv[1]);
	ft_putchar('\n');

	return 0;
}
