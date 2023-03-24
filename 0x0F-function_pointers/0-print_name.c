#include "function_pointers.h"

/**
 * print_name - Write a function that prints a name.
 * @name: The name to be printed.
 * @f: A function pointer.
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;

	f(name);
}
