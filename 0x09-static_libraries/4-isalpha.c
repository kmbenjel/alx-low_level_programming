#include "main.h"

/**
 * _isalpha - Checks for alphanumeric chars
 * Description: Check whether a char is alpha or not
 * @c: a character
 * Return: 1, 0
 */

int _isalpha(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);

	if (c >= 'A' && c <= 'Z')
		return (1);
	return (0);
}
