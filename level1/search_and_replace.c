#include <stdio.h>
#include <unistd.h>

int main(int argc, char **str)
{
	int	i;

	i = 0;

	if (argc == 4)
	{
		if (str[2][1] == '\0' && str[3][1] == '\0')
		{
			while (str[1][i] != '\0')
			{
				if (str[1][i] == str[2][0])
				{
					str[1][i] = str[3][0];
				}
				else
				{
					str[1][i] = str[1][i];
				}
				write(1, &str[1][i], 1);
			i++;
		}
		}
	}
	write(1, "\n", 1);
	return (0);
}


// int main (int argc, char **argv)
// {
// 	if (argc == 4)
// 	{
// 		printf ("string1:%c\n", argv[1][3]);
// 		printf ("string2:%s\n", argv[2]);
// 		printf ("string3:%s\n", argv[3]);
// 	}

// 	return (0);


// }