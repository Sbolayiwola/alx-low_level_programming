#include <stdio.h>

/**
 * main - program that computes and prints the sum
 * Return: 0
 */

int main(void)
{
	int m;
	int n;

	n = 0;
	for (m = 0; m < 1024; m++)
	{
		if
		((m % 3 == 0) || (m % 5 == 0))
		{
			n += m;
		}
	}
	printf("%d\n", n);
	return (0);
}
