#include <stdlib.h>
#include <stdio.h>

int	ft_isprime(int n)
{
	int	i;

	i = 2;
	while (n > i)
	{
		if (n % i == 0)
			return (0);
		i++;
	}
	return (1);
}

int	main(int argc, char **argv)
{
	int	n;
	int	i;
	int	first;
	
	i = 2;
	first = 1;
	if (argc == 2)
	{
		n = atoi(argv[1]);
		if (n == 1)
			printf("1");
		while (n >= i)
		{
			if (n % i == 0 && ft_isprime(i))
			{
				if (first == 1)
				{
					printf("%i", i);
					first = 0;
				}
				else
					printf("%i", i);
				n = n / i;
				if (n > i)
					printf("*");
			}
			else
				i++;
		}
	}
	printf("\n");
	return (0);
}
