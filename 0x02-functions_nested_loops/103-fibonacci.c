#include <stdio.h>

/**
 * main -  program that finds and prints the sum of the even-valued terms
 * Return: 0
 */
int main(void)
{
	int a = 0;
	int b = 1;
	int c = 0;
	int sum = 0;

	while (c <= 4000000)
	{
		c = a + b;

		a = b;
		b = c;

		if
		(c % 2 == 0)
		{
			sum += c;
		}
	}

	printf("%d\n", sum);

	return (0);
}
