/*
 * File: 3-islower.c
 * Auth: William A Meilahn
 */

#include "main.h"

/**
 * _islower - Checks if a charater is lowercase.
 * @c: The charater to bo checked.
 *
 * Return: 1 if charater is lowercase, 0 otherwise.
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
