#include <unistd.h>

void ft_putchar(char c) {
    write(1, &c, 1);
}

void getString(char *str, char find, char replace)
{
    int i = 0;
    int found = 0;
    while (str[i] != '\0')
    {
        if (str[i] == find)
        {
            str[i] = replace;
            found = 1;
        }
	ft_putchar(str[i]);
        i++;
    }
    if (found == 0)
    {
        ft_putchar('\n');
    }
}

int main(int argc, char **argv) {
    if (argc == 4) {
        char *str = argv[1];
        char find = '\0';
        if (argv[2][0] != '\0' && argv[2][1] == '\0')
        {
            find = argv[2][0];
        }
        else
        {
            ft_putchar('\n');
            return 0;
        }
        char replace = argv[3][0];
        getString(str, find, replace);
    } else {
        ft_putchar('\n');
    }
    return 0;
}

