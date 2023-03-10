#include "main.h"

/**
 * is_prime_number:a function that checks for a prime number.
 * @n: variable to hold values.
 * Return: 1 if the input integer is a prime number, otherwise return 0
 */

int is_prime_number(int n)

{
	if (n > 1 && n % n == 0)

	return (1);
	else
		{
		return (0);
		}
}
