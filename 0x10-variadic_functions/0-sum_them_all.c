#include "variadic_functions.h"

/**
 * sum_them_all - Sum all params
 * Description: Write a function that returns the
 * sum of all its parameters.
 * @n: int
 * @...: extra params
 * Return: int
 */

int	sum_them_all(const unsigned int n, ...)
{
	int				sum;
	unsigned int	i;
	va_list			args;

	sum = 0;
	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		sum += va_arg(args, int);
	}
	va_end(args);
	return (sum);
}
