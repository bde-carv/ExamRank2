#include <stdio.h>
#include <unistd.h>

void	ft_putstr(char *str)
{
	int i;

	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
}

int main()
{
	char *str;

	str = "Hello world";

	ft_putstr(str);

return(0);
}