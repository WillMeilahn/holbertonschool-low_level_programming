/*
 * File: 8-print_array.c
 * Auth: William A Meilahn
 */

#include "main.h"
#include <stdio.h>

/**
 * print_array - Prints an inputed number of elements
 *               of an array of integers.
 * @a: The array of integers.
 * @n: The number of elements to be printed.
 */
void print_array(int *a, int n)
{
	int index;

	for (index = 0; index < n; index++)
	{
		printf("%d", a[index]);

		if (index == n)
			continue;

		printf(", ");
	}

	printf("\n");
}
