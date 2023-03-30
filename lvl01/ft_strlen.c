int	ft_strlen(char *str)
{
    int	str_length = 0;

    while (*str != '\0') 
    {
        str_length++;
        str++;
    }

    return str_length;
}
/*main
#include <stdio.h>

int	main(void)
{
	char	str[] = "Hello";

	printf("%d\n", ft_strlen(str));
	return (0);
}
