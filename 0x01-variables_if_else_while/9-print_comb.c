#include <stdio.h>

/**
 * main - program that prints all possible combinations of single-digit numbers
 * Return: (0)
 */

int main(void)
{
	int n;

	n = 0;
	while
		(n < 10)
	{
		putchar(n + '0');
		n++;
		if (n < 10)
		{
		putchar(',');
		putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
