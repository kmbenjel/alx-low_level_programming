#include "main.h"

/**
 * _pow_recursion - Power x to y
 * Description: Write a function that returns
 * the value of x raised to the power of y.
 * @x: int
 * @y: int
 * Return: -1 in error, x to y otherwise
 */


int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	return (_pow_recursion(x, y - 1) * x);
}


