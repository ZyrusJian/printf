#include "main.h"

int process_format(const char *format, va_list args);

/**
 * _printf - function to produce output according to a format
 * @format: the format string
 *
 * Return: the number of characters printed
 */

int _printf(const char *format, ...)
{
	va_list args;
	int count = 0;

	if (format == NULL)
		return (-1);

	va_start(args, format);

	count = process_format(format, args);

	va_end(args);

	return (count);
}

/**
 * process_format - function to process format and print output
 * @format: the format string
 * @args: the variable arguments list
 *
 * Return: the number of characters printed
 */

int process_format(const char *format, va_list args)
{
	int i, count = 0;

	for (i = 0; format[i]; i++)
	{
		if (format[i] == '%')
		{
			i++;

			if (format[i] == '\0')
				return (-1);

			switch (format[i])
			{
			case 'c':
				count += print_char(args);
				break;
			case 's':
				count += print_str(args);
				break;
			case '%':
				count += _putchar('%');
				break;
			default:
				count += _putchar('%');
				count += _putchar(format[i]);
			}
		}
		else
		{
			count += _putchar(format[i]);
		}
	}

	return (count);
}
