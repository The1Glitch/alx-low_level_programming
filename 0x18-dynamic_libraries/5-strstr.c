#include "main.h"

/**
 * _strstr - Finds the first occurrence of the sustring.
 * Needle in the string haystack.
 * @haystack: Entire string.
 * @needle: Substring.
 * Return: Pointer to the beginning of the located subsring or
 * NULL if th subsring is not found.
*/
char *_strstr(char *haystack, char *needle)
{
	char *bhaystack;
	char *pneedle;

	while (*haystack != '\0')
	{
		bhaystack = haystack;
		pneedle = needle;

		while (*haystack != '\0' && *pneedle != '\0' && *haystack == *pneedle)
		{
			haystack++;
			pneedle++;
		}
		if (!*pneedle)
			return (bhaystack);
		haystack = bhaystack + 1;
	}
	return (0);
}
