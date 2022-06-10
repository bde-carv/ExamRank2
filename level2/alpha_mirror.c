#include <stdio.h>
#include <unistd.h>

int main(int argc, char **str)
{
	int	i;

	i = 0;
	if (argc == 2)
	{
		while (str[1][i] != '\0')
		{
			if (str[1][i] >= 'a' && str[1][i] <= 'z')
			{
				str[1][i] = 109 - (str[1][i] - 110);
			}
			else if (str[1][i] >= 'A' && str[1][i] <= 'Z')
			{
				str[1][i] = 77 - (str[1][i] - 78);
			}
			write(1, &str[1][i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}