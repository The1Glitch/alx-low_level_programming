#include "main.h"
/**
 * _isalpha - Checks if char is a alphabet char.
 * @c: Types integer char.
 * Return: 1  if letter, lowercase or uppercase, and 0 otherwise.
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);

	else
		return (0);
}
