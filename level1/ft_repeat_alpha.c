#include <stdio.h>
#include <unistd.h>

int main(int argc, char **str)
{
	int i;
	int count;

	i = 0;
	count = 0;

	if (argc == 2)
	{
		while (str[1][i] != '\0')
		{
			if (str[1][i] >= 'A' && str[1][i] <= 'Z')
			{
				count = str[1][i] - 64;
			}
			else if (str[1][i] >= 'a' && str[1][i] <= 'z')
			{
				count = str[1][i] - 96;
			}
			while (count > 0)
			{
				write(1, &str[1][i], 1);
				count --;
			}
			count = 0; 
			i++;
		}
		write(1, "\n", 1);
	}
	
}