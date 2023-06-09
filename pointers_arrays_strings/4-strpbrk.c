#include "main.h"

/**
 * _strpbrk - Searches  string for any of a set of bytes.
 * @s: First string.
 * @accept: Second string.
 * Return: A pointer to the byte in @s that matches one of the
 *         bytes in @accept, or NULL if no such byte is found.
 */
char *_strpbrk(char *s, char *accept)
{
	unsigned int i;
	unsigned int j;

	for (i = 0; *(s + i) != '\0'; i++)
	{
		for (j = 0; *(accept + j) != '\0'; j++)
		{
			if (*(s + 1) == *(accept + j))
				return (s + i);
		}
	}
	return ('\0');
}
