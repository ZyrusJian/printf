#include "main.h"

/**
 * print_integer - Prints an integer to stdout
 * @n: The integer to be printed
 *
 * Return: The number of characters printed.
 */

int print_integer(int n)
{
	unsigned int num;
	int div = 1;
	int len = 0;

	if (n < 0)
	{
		len += _putchar('-');
		num = -n;
	}
	else
		num = n;

	while (num / div > 9)
		div *= 10;

	while (div != 0)
	{
		len += _putchar('0' + (num / div) % 10);
		div /= 10;
	}

	return (len);
}
