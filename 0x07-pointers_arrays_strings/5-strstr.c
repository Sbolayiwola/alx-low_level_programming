#include "main.h"

/**
 * _strstr - Entry point
 * @haystack: input
 * @needle: input
 * Return: Always 0 (Success)
 */

char *_strstr(char *haystack, char *needle)
{
	char *p1 = haystack;
	char *p2 = needle;

	while (*haystack != '\0')
	{
		p1 = haystack;
		p2 = needle;

		while (*p1 != '\0' && *p2 != '\0' && *p1 == *p2)
		{
			p1++;
			p2++;
		}
			if (*p2 == '\0')
			return (haystack);
			haystack++;
	}
	return ('\0');
}
