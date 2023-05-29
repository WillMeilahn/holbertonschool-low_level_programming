/*
 * File: 4-isalpha.c
 * Auth: William A Meilahn
 */

#include "main.h"

/**
 * _isalpha - Checks if a charater is alphabetic.
 * @c: The charater to be checked.
 *
 * Return: 1 if charater is letter, lowercase or uppercase, 0 otherwise.
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') ||
	    (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
