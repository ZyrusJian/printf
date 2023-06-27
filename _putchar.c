#include <unistd.h>
#include "main.h"
/**
 * _putchar - writes a character to the standard output
 * @c: the character to be written
 *
 * Return: on success, the character written is returned;
 *         on error, -1 is returned
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
