#include "main.h"

/**
 * _memcpy - copies memory area.
 * @n: Number of bytes filled.
 * @src: The source memory area.
 * @dest: The destination memory area.
 *
 * Return: The pointer to @dest.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		*(dest + i) = *(src + i);

	return (dest);
}
