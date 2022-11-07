#include <stdio.h>

void	printNumber(int nb)
{
	printf("%d\n", nb);
}

void myfunction(void (*f)(int))
{
	int i = 0;
	while (i < 5)
	{
		(*f)(i);
		i++;
	}
}

int	main(void)
{
	myfunction(printNumber);
	return (0);
}
