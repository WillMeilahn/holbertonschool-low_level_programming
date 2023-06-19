#include "main.h"

/**
 * _memset - Fills memory with a constant byte.
 * @s: The pointer pointing to the memory area to be filled.
 * @b: The constant byte.
 * @n: Number of bytes being filled.
 *
 * Return: The pointer @s.
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned char *p = (unsigned char *)s;

	while (n--)
		*p++ = (unsigned char)b;

	return (s);
}
