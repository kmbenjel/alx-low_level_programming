#include "main.h"
#include "4-pow_recursion.c"

/**
 * sqrt_go - Goes from an initial guess
 * Description: Start with n/2 and adapt
 * @n: an int
 * @g: the guess
 * Return: int
 */

static int sqrt_go(int n, int g)
{
	if (n == 0 || n == 1)
		return (n);
	if (n < 0)
		return (-1);
	if (g <= 0)
		return (-1);
	if (_pow_recursion(g, 2) == n)
		return (g);
	else
		return (sqrt_go(n, g - 1));
	return (-1);
}

/**
 * _sqrt_recursion - Square Root
 * Description: Write a function that returns
 * the natural square root of a number.
 * @n: an int
 * Return: an int
 */

int _sqrt_recursion(int n)
{
	return (sqrt_go(n, n / 2 + n % 2));
}
