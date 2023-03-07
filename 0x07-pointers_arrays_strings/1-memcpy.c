#include "main.h"

/*
 *@n: number of bytes
 *@src: memory area to copy n bytes
 *@dest: memory area to store n bytes
 */
char *_memcpy(char *dest, char *src, unsigned int n);
{
	unsigned int i;
	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
