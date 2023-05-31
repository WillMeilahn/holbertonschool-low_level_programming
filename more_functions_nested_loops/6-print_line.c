/*
 * File: 6-print_line.c
 * Auth: William A Meilahn
 */

#include "main.h"

/**
 * print_line - Draws a straight line using the charater _.
 * @n: The number of _ charaters to be printed.
 */
void print_line(int n)
{
	int len;

	if (n > 0)
	{
		for (len = 0; len < n; len++)
			_putchar('_');
	}

	_putchar('\n');
}
