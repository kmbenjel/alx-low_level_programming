
/**
 * space_or_sign - is space or sign
 * Description: Whether the char is a space or not
 * @c: a char
 * Return: 0 or 1
 */
static char space_or_sign(char c)
{
	char *str = "\t\n\v\f\r+- ";
	int i = 0;

	while (str[i])
	{
		if (c == str[i])
			return (1);
		i++;
	}
	return (0);
}

