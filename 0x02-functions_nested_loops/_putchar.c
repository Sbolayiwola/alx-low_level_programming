#include "main.h"
#include <unistd.h>

/**
 * _putchar - program that prints _putchar, followed by a new line
 * @c: character to print
 * Return: 1
 */
int _putchar(char c)

{
	return (write(1, &c, 1));
}
