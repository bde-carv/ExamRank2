#include <stdio.h>
#include <unistd.h>

int main(int argc, char **str)
{
	int i;

	i = 0;

	if (argc == 2)
	{
		if (str[1][i] >= 'a' && str[1][i] <= 'z')
		{
			while (str[1][i] != '\0')
			{
				if (i == 0)
				{
					str[1][i] = str[1][i];
				}
				else
				{
					if (str[1][i] >= 'A' && str[1][i] <= 'Z')
					{
						
					}
					
				}
				
				i++;
			}
		}
		
	}
	




	return (0);
}