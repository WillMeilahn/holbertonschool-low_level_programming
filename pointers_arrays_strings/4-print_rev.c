/*
 * File: 4-print_rev.c
 * Auth: William A Meilahn
 */

#include "main.h"

/**
 * print_rev - Prints a string in reverse.
 * @s: The string to be printed.
 */
void print_rev(char *s)
{
	int len;

	for (len = 0; len >= '\0'; len++)
		_putchar(s[len]);

	_putchar('\n');
}
