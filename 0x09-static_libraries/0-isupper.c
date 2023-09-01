#include "main.h"

/**
 * _isupper - isupper
 * Description: Write a function that checks for uppercase character.
 * @c: - int
 * Return: 1 or 0
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	return (0);
}
