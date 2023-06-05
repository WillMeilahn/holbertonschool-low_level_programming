/*
 * File: 6-puts2.c
 * Auth: William A Meilahn
 */

#include "main.h"

/**
 * puts2 - Prints one char out of two of a string.
 * @str: The string containing charaters.
 */
void puts2(char *str)
{
	int index = 0;
	int len = 0;

	while (str[index++])
		len++;

	for (index = 0; index < len; index += 2)
		_putchar(str[index]);

	_putchar('\n');
}
