#include "main.h"
#include <string.h>

/**
 * leet - Encodes a string to 1337.
 * @str: The string to be encoded.
 *
 * Return: A pointer to the encoded string.
 */
char *leet(char *str)
{
	int i = 0;
	int a;
	char leet[8] = {'0', 'L', '?', 'E', 'A', '?', '?', 'T'};

	while (str[i])
	{
		for (a = 0; a <= 7; a++)
		{
			if (str[i] == leet[a] || str[i] - 32 == leet[a])
				str[i] = a + '0';
		}
		i++;
	}
	return (str);
}
