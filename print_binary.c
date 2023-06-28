#include "main.h"

/**
 * print_binary - prints a binary number
 * @n: The argument to be converted to binary
 *
 * Return: The number of characters printed
 */

int print_binary(unsigned int n)
{
	unsigned int num = n;
	int count = 0;

	if (num <= 1)
	{
		_putchar(num + '0');
		count++;
	}
	else
	{
		count += print_binary(num / 2);
		_putchar((num % 2) + '0');
		count++;
	}

	return (count);
}
