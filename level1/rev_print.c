#include <stdio.h>
#include <unistd.h>

int main(int argc, char **str)
{
	int i;
	int len;

	i = 0;
	len = 0;

	if (argc == 2)
	{
		while (str[1][i] != '\0')
		{
			i++;
			len++;
		}
		while (len > 0)
		{
			len--;
			write(1, &str[1][len], 1);
		}
	}
	write(1, "\n", 1);
	return (0);
}
