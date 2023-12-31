#include "variadic_functions.h"

/**
 * print_strings - Print strings
 * Description: Write a function that prints
 * strings, followed by a new line.
 * @separator: a string
 * @n: unsigned int
 * @...: extra args
 */

void	print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int	i;
	va_list			args;
	char			*ptr;

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		ptr = va_arg(args, char *);
		if (ptr)
			printf("%s", ptr);
		else
			printf("(nil)");
		if (separator && i != n - 1)
			printf("%s", separator);
	}
	printf("\n");
}
