#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>

size_t ft_strcspn(char const *s, const char *charset)
{
	int i;
	int j;

	i = 0;

	while (s[i] != '\0')
	{
		j = 0;
		while (charset[j] != '\0')
		{
			if (s[i] == charset[j])
			{
				return(i);
			}
			j++;
		}
		i++;
	}
	return(i);
}


int main()
{
	char *s;
	char *set;

	s = "Hello";
	set = "gggo";

	printf("return value is:%zu\n", ft_strcspn(s, set));
	printf("original:%zu\n", strcspn(s, set));
	return (0);
}