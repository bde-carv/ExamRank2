#include <stdio.h>
#include <unistd.h>

void ft_write_num(int num)
{
	if (num >= 10)
	{
		ft_write_num(num / 10);
	}
	write(1, &"0123456789"[num % 10], 1);
}


int main()
{
	int i;

	i = 1;

	while (i <= 100)
	{
		if (i % 3 == 0 && i % 5 == 0)
		{
			write(1, "fizzbuzz", 8);
			write(1, "\n", 1);

		}
		else if (i % 5 == 0)
		{
			write(1, "buzz", 4);
			write(1, "\n", 1);
		}
		else if (i % 3 == 0)
		{
			write(1, "fizz", 4);
			write(1, "\n", 1);

		}
		else
		{
			ft_write_num(i);
			write(1, "\n", 1);
		}
		i++;
	}

	return (0);
}