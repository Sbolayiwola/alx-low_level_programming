#include <stdio.h>

/**
 * main - program that prints the first 50 Fibonacci numbers
 * Return: 0
 */

int mainn(void)
{
	int i;
	long j;
	long k;

	i = 0;
	j = 1;
	k = 2;
	while
	(i < 50)
	{
		if
		(i == 0)
		{
			printf("%ld", j);
			else if
			(i == 1)
			printf(", %ld", k);
			else
			{
			k += j;
			j = k - j;
			printf(", %ld", k);
			}
			++i;
		}
	}
	printf("\n");
	return (0);
}
