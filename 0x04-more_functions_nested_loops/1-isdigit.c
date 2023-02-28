#include "main.h"

/**
 * _isdigit - checks for digits between 0 to 9
 * @c: Digits
 * Return: 1 if is a number (0 to 9), else 0
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

