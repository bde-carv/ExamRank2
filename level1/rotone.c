#include <stdio.h>
#include <unistd.h>

int main(int argc, char **str)
{
	int i;

	i = 0;

	if (argc == 2)
	{
		while (str[1][i] != '\0')
		{
			if (str[1][i] >= 'a' && str[1][i] <= 'y')
			{
				str[1][i] = str[1][i] + 1;
			}
			else if (str[1][i] >= 'A' && str[1][i] <= 'Y')
			{
				str[1][i] = str[1][i] + 1;
			}
			else if (str[1][i] == 'z' || str[1][i] == 'Z')
			{
				str[1][i] = str[1][i] - 25;
			}
			write(1, &str[1][i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
