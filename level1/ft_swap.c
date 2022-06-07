#include <stdio.h>
#include <unistd.h>

void	ft_swap(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;

	return;
}

int main()
{
	int *a;
	int *b;

	int num_a = 3;
	int num_b = 5;

	a = &num_a;
	b = &num_b;

	printf("a before:%d\n", num_a);
	printf("b before:%d\n", num_b);

	ft_swap(a, b);

	printf("a after:%d\n", num_a);
	printf("b after:%d\n", num_b);

	return (0);
}