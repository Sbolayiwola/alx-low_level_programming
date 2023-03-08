#include "main.h"

/**
 * _strpbrk - Entry point
 * @s: input
 * @accept: input
 * Return: Always 0 (Success)
 */

char *_strpbrk(char *s, char *accept)
{
	char *p;
	int i;

	for (i = 0; s[i]; i++)
	{
		for (p = accept; *p; p++)
		{
			if (s[i] == *p)
			return (&s[i]);
		}
	}
	return ('\0');
}
