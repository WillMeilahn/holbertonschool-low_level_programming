#include "main.h"

/**
 * _strchr - locates a character in a string.
 * @c: A pointer to the first occurrence of the character.
 * @s: The string.
 * Return: @s, or NULL if the character is not found.
 */
char *_strchr(char *s, char c)
{
	while (*s++)
	{
		if (*s == c)
			return (s);
	}

	return (0);
}
