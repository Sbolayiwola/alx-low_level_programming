#include <stdio.h>

/**
 * main - program that prints the first 50 Fibonacci numbers
 * Return: 0
 */

int main(void)
{
	long long int a = 1;
	long long int b = 2;
	long long int c;
	int count = 2;

	printf("%lld, %lld", a, b);

	while (count < 50)
	{
		c = a + b;

		printf(", %lld", c);

		a = b;
		b = c;
		count++;
	}

	printf("\n");

	return (0);
}
