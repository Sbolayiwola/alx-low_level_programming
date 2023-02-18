#include <stdio.h>

/**
 * main - program prints all the numbers of base 16 in lowercase
 * Return: 0
 */

int main(void)
{
	char c;

	c = '0';
		while
			(c < 'f')
	{
		if (c > '9' && c < 'a')
			c = 'a';
		putchar(c);
		c++;
	}
	putchar('\n');
	return (0);
}
