#include <stdio.h>
#include <unistd.h>

char    *ft_strcpy(char *s1, char *s2)
{
	int i;
	i = 0;
	while (s2[i] != '\0')
	{
		s1[i] = s2[i];
		i++;
	}
	s1[i] = '\0';
	return(s1);
}

int main()
{
	char *s1;
	char *s2;
	// char *s3;

	s1 = "Hello ";
	s2 = "World\n";

	//s3 = ft_strcpy(s1, s2);

	printf("new string is:%s\n", ft_strcpy(s1, s2));

	return (0);
}