#include "main.h"

/**
 * reverse_array - Prints an array of integers in reverse
 * @a: The array to be reversed
 * @n: The number of elements to swap
 */
void reverse_array(int *a, int n)
{
	int i;
	int tmp;

	for (i = n - 1; i >= n / 2; i--)
	{
		tmp = a[n - 1 - i];
		a[n - 1 - i] = a[i];
		a[i] = tmp;
	}
}
