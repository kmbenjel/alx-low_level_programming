#include "main.h"

/**
 * factorial - Factorial
 * Description: Write a function that
 * returns the factorial of a given number.
 * @n: an int
 * Return: an int
 */


int factorial(int n)
{
	if  (n < 0)
		return (-1);
	else if (n > 0)
		return (n * factorial(n - 1));
	else
		return (1);
}

