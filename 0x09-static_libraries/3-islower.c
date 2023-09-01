#include "main.h"

/**
 * _islower - Checks for lowercase chars
 * Description: Check whether a char is lowercase or not
 * @c: a character
 * Return: 1, 0
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	return (0);
}
