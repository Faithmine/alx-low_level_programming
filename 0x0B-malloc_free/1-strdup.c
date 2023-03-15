#include <stdlib.h>
#include <stdio.h>
#include<string.h>
#include "main.h"

/**
 * _strdup - function returns a pointer to a new string
 *	which is a duplicate of the string
 * @str: has a duplicate
 * Return: a pointer to the duplicated string.
 *	It returns NULL if insufficient memory was available
 */
char *_strdup(char *str)
	{
	if (str == NULL)
	{
	return (NULL);
	}
	else
	{
	char *s = strdup(str);

	return (s);

	}
	}
