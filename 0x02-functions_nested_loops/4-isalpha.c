#include "main.h"

/**
 * _isalpha(int c) -  function that checks for alphabetic character
 * @c: The character
 * Return: 1 if is an alphabet, 0 if not
 */

int _isalpha(int c)
{
	if
	(c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
