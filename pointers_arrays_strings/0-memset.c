#include "main.h"
#include <string.h>

/**
 * The following code fills memory with a constant byte.
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned char *p = (unsigned char *)s;

	while (n--)
	{
		*p++ = (unsigned char)b;
	}
	return (s);
}
