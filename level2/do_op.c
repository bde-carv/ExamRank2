#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int main(int argc, char **str1)
{
	int a;
	int b;
	int result;
	char op;

	a = atoi(str1[1]);
	b = atoi(str1[3]);
	op = str1[2][0];

	if (argc == 4)
	{
		if (op == '+')
		{
			result = a + b;
		}
		else if (op == '-')
		{
			result = a - b;
		}
		else if (op == '*')
		{
			result = a * b;
		}
		else if (op == '/')
		{
			result = a / b;
		}
		else if (op == '%')
		{
			result = a % b;
		}
		printf("result is:%d\n", result);
	}
	write(1, "\n", 1);
	return (0);
}
