#include "main.h"

/**
 * sqrt_go - Goes from an initial guess
 * Description: Start with n/2 and adapt
 * @n: an int
 * @g: the guess, a double
 * Return: int
 */

int sqrt_go(int n, int g)
{
	if (n < 0 || g < 0)
		return (-1);
	if (g * g == n)
		return (g);
	else if (g * g < n)
		return (sqrt_go(n, g + 1));
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
	return (sqrt_go(n, 0));
}
