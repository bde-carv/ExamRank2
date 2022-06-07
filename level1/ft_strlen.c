#include <stdio.h>
#include <unistd.h>


int	ft_strlen(char *str)
{
	int i;

	while (str[i] != '\0')
	{
		i++;
	}
	return(i);
}

/*int main()
{
	char *str;

	int length;

	str = "Hello ";

	length = ft_strlen(str);
	printf("length of string is:%d\n", length);

	return (0);
}*/