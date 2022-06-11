#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int ft_strlen(char **str)
{
	int i;

	i = 0;
	while (str[1][i] != '\0')
	{
		i++;
	}
	return (i);
}

int ft_caps(char **str)
{
	int i;
	int caps;

	i = 0;
	caps = 0;
	while (str[1][i] != '\0')
	{
		if (str[1][i] >= 'A' && str[1][i] <= 'Z')
		{
			caps++;
		}
		i++;
	}
	return (caps);
}

int main (int argc, char **str)
{
	int		i;
	int		j;
	char	*new_str;

	i = 0;
	j = 0;
	new_str = (char *)malloc((ft_strlen(str) + ft_caps(str)) * sizeof(char));
	if (!new_str)
	{
		return(0);
	}
	if (argc == 2)
	{
			while (str[1][i] != '\0')
			{
					if (str[1][i] >= 'A' && str[1][i] <= 'Z')
					{
						new_str[j] = '_';
						j++;
						new_str[j] = str[1][i] + 32 ;
						j++;
					}
					else
					{
						new_str[j] = str[1][i];
						j++;
					}	
				i++;
			}
	}
	new_str[j] = '\0';
	j = 0;
	while (new_str[j] != '\0')
	{
		write(1, &new_str[j], 1);
		j++;
	}
	free(new_str);
	return (0);
}
