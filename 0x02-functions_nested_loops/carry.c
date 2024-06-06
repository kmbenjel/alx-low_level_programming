#include <stdio.h>
#include <string.h>

	// Function to add two large numbers represented as strings
	void
	add_strings(const char *num1, const char *num2, char *result)
{
	int	len1;
	int	len2;
	int	max_len;
	int carry, sum, digit1, digit2;

	len1 = strlen(num1);
	len2 = strlen(num2);
	max_len = (len1 > len2) ? len1 : len2;
	carry = 0;
	// Initialize result with zeros
	for (int i = 0; i <= max_len; i++)
	{
		result[i] = '0';
	}
	result[max_len + 1] = '\0';
	for (int i = 0; i < max_len; i++)
	{
		digit1 = (i < len1) ? num1[len1 - 1 - i] - '0' : 0;
		digit2 = (i < len2) ? num2[len2 - 1 - i] - '0' : 0;
		sum = digit1 + digit2 + carry;
		carry = sum / 10;
		result[max_len - 1 - i] = (sum % 10) + '0';
	}
	// Handle final carry
	if (carry > 0)
	{
		for (int i = max_len; i > 0; i--)
		{
			result[i] = result[i - 1];
		}
		result[0] = carry + '0';
	}
	else
	{
		// Remove leading zero if no carry
		for (int i = 0; result[i] != '\0'; i++)
		{
			result[i] = result[i + 1];
		}
	}
}

int	main(void)
{
	char	num1[] = "12345678901234567890";
	char	num2[] = "98765432109876543210";

	char result[100]; // Result buffer, ensure it is large enough
	add_strings(num1, num2, result);

	printf("Sum: %s\n", result);
	return (0);
}
