#include "main.h"

/**
 * print_str - Function to print string
 * @args: va_list containin the string to be printed
 *
 * Return: Number of characters printed
 */

int print_str(va_list args)
{
	char *str = va_arg(args, char *);
	int i, count = 0;

	if (str == NULL)
		str = "(null)";

	for (i = 0; str[i]; i++)
		count += _putchar(str[i]);

	return (count);
}
