#include <stdio.h>
/**
 * main - program prints all possible different combinations of two digits
 * Return: 0
 */
int main(void)
{
	int d;
	int e;

	for (d = 0; d < 9; d++)
	{
		for (e = d + 1; e < 10; e++)
		{
			putchar(d + '0');
			putchar(e + '0');

			if (d == 8 && e == 9)
				continue;

			putchar(',');
			putchar(' ');
		}
	}

	putchar('\n');
	return (0);
}
