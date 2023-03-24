#include "function_pointers.h"

/**
 * int_index - a function that searches for an integer in an array of integers.
 * @array: an array of integers.
 * @size: The array's size.
 * @cmp: A pointer to the function to be used to compare values.
 *
 * Return:the index of the first element for which
 *	the cmp function does not return 0
 *	If no element matches, return -1
 *	If size <= 0, return -1
int int_index(int *array, int size, int (*cmp)(int))
{
	int index;
	if (size <= 0)
{
	return (-1);
}
	if ((array != NULL) && (cmp != NULL))
{
	for (index = 0; index < size; index++)
{
	if (cmp(array[index]) != 0)
{
	return (index);
}
}
}
	return (-1);
}
