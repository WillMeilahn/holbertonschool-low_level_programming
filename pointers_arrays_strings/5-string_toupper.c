#include "main.h"

/**
 * string_toupper - Changes all lowercase letters
 *                  to uppercase in a string.
 * @str: The string to be changed.
 */
char *string_toupper(char *)
{
	int i = 0;

	while (str[i])
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] -= 32;

		i++;
	}

	return (str);
}
