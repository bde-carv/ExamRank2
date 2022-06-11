#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int ft_atoi (const char *str)
{
	int i;
	int sign;
	int result;

	result = 0;
	i = 0;
	sign = 1;
	while (str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
	{
		i++;
	}
	if (str[i] == '-')
	{
		sign = -1;
		i++;
	}
	else if (str[i] == '+')
	{
		i++;
	}
	while (str[i] != '\0' && str[i] >= '0' && str[i] <= '9')
	{
		result = result * 10;
		result = result + (str[i] - '0');
		i++;
	}
	result = result * sign;
	return (result);
}

int main ()
{
	char *str;

	str = "123";
	printf("value is:%d\n", ft_atoi(str));
	printf("original value:%d\n", atoi(str));
	return (0);
}
