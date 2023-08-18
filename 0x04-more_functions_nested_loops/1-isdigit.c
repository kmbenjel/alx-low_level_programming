#include "main.h"

/**
 * _isdigit - is digit
 * Description: Write a function that checks for a digit (0 through 9)
 * @c: - char
 * Return: 1 or 0
 */

int _isdigit(int c)
{
	if (c <= '9' && c >= '0')
		return (1);
	return (0);
}
