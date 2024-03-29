
#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

void print_char(va_list arg);
void print_int(va_list arg);
void print_float(va_list arg);
void print_string(va_list arg);
void print_all(const char * const format, ...);

/**
 * print_char - Prints out a char.
 * @arg: list the arguments pointing to the character to be printed.
 */
void print_char(va_list arg)
{
	char i;

	i = va_arg(arg, int);
	printf("%c", i);
}

/**
 * print_int - Prints an int.
 * @arg: A list of arguments pointing to the integer to be printed.
 */
void print_int(va_list arg)
{
	int num;

	num = va_arg(arg, int);
	printf("%d", num);
}
