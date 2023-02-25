#include <stdio.h>

/**
 * main - program that prints the first 50 Fibonacci numbers
 * Return: 0
 */

int main(void)
{
	long int a = 1;
	long int b = 2;
	long int c;
	int count = 2;

	printf("%ld, %ld", a, b);

	while (count < 50)
	{
		c = a + b;

		printf(", %ld", c);

		a = b;
		b = c;
		count++;
	}

	printf("\n");

	return (0);
}
