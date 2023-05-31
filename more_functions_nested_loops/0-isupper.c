/*
 * File: 0-isupper.c
 * Auth: William A Meilahn
 */

#include "main.h"

/**
 * _isupper - Checks for uppercase charaters.
 * @c: The charater to be checked.
 *
 * Return: 1 if charater is uppercase, 0 otherwise.
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);

	else
		return (0);
}
