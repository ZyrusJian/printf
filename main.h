#ifndef _MAIN_H_
#define _MAIN_H_

#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>
#include <stdlib.h>

/*
 * Function prototypes
 */

int _putchar(char c);
int print_char(va_list args);
int print_str(va_list args);
int _printf(const char *format, ...);
int print_integer(int n);

#endif /* _MAIN_H_ */
