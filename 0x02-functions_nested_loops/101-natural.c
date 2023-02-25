#include "main.h"

/**
 * main - program that computes and prints the sum
 * Return: 0
 */

int main(void)
{
	int m;
	int n;

	n = 0;
	while
		(m < 1024)
	{
		if
		((m % 3 == 0) || (m % 5 == 0))
		{
			n += m;
		}
			m++;
	}
	printf("%d\n", n);
	return (0);
}
