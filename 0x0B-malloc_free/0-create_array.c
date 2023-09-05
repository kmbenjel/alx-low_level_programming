#include "main.h"

/**
 * create_array - array of ints
 * Description: Write a function that creates
 * an array of chars, and initializes it with
 * a specific char.
 * @size: unsigned int
 * @c: char
 * Return: char*
 */

char	*create_array(unsigned int size, char c)
{
	char	*char_array;
	int		i;

	char_array = malloc(size);
	i = 0;
	if (!char_array || !size)
		return (NULL);
	while (i < (int)size)
	{
		char_array[i] = c;
		i++;
	}
	char_array[i] = '\0';
	return (char_array);
}
