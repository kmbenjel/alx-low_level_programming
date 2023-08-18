#include "main.h"

/**
 * main - _putchar
 * Description: a program to print "_ptuchar"
 * Return: always 0
 */

int main(void)
{
	char *ptc = "_putchar\n";
	int i;

	i = -1;
	while (ptc[++i])
		_putchar(ptc[i]);
	return (0);
}
