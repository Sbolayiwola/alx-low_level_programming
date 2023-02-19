#include <stdio.h>

/**
 * main - program prints all possible combinations of two two-digit
 * Return: 0
 */
int main(void)
{
	int j;
	int k;

	for (j = 0; j < 100; j++)
	{
		for (k = j + 1; k < 100; k++)
		{
			putchar(j / 10 + '0');
			putchar(j % 10 + '0');
			putchar(' ');
			putchar(k / 10 + '0');
			putchar(k % 10 + '0');
			if (j != 98 || k != 99)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
