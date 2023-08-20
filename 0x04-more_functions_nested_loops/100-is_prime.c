/**
 * is_prime - whether prime or not
 * Description: Prime or Not
 * @n: a long
 * Return: 0 or 1
 */


int is_prime(long n)
{
	int factor = 2;
	int divisors = 1;
	while (n > 1)
	{
		if (n % factor == 0)
		{
			n /= factor;
			divisors++;
		}
		factor++;
	}
	if (divisors == 2)
		return (1);
	return (0);
}
