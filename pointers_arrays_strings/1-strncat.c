#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * _strncat - Concatenates two strings.
 * @dest: destination.
 * @src: source.
 * @n: amount of bytes used from @src.
 *
 * Return: The pointer to the destination.
 */
char *_strncat(char *dest, char *src, int n)
{
	int index = 0, j = 0;

	while (dest[index])
	{
		index++;
	}

	while (j < n && src[j])
	{
		dest[index] = src[j];
		index++;
		j++;
	}

	dest[index + n + 1] = '\0';

	return (dest);
}
