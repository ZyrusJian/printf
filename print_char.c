#include "main.h"

/**
 * print_char - Function to print char
 * @args: va_list containing the character to be printed
 *
 * Return: Number of characters printed
 */

int print_char(va_list args)
{
	char c = va_arg(args, int);

	return (_putchar(c));
}
