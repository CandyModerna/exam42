#include <unistd.h>
#include <stdlib.h>

char *ft_strcpy(char *s1, char *s2) {
    int s2_length = 0;

    while (s2[s2_length] != '\0') {
        s2_length++;
    }

    s1 = (char*) malloc((s2_length + 1) * sizeof(char));
    
    int i = 0;
    while (s2[i] != '\0') {
        s1[i] = s2[i];
        i++;
    }

    s1[i] = '\0';

    i = 0;
    write(1, "This is Copied: ", 16);
    while (s1[i] != '\0') {
        write(1, &s1[i], 1);
        i++;
    }
    write(1, "\n", 1);

    free(s1);

    return s1;
}

int main(int argc, char *argv[])
{
	if (argc < 2)
	{
		write(1, "Enter syntax like so: ./a.out \"<string>\" ", 38);
		return 1;
	}
	char	*input = argv[1];
    char	*copied;

    ft_strcpy(copied, input);
    write(1, "This is Input: ", 15);
    write(1, &input, sizeof(input));
   
    return 0;
}
