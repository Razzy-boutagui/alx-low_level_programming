#include "main.h"

/**
 * _islower - entry point
 *
 * @c: the character to check if upperreturn 0 if lower return 1
 *
 * Return: 1 if lower and 0 otherwise
 */


int _islower(int c)
{
	if (c <= 122 && c >= 97)
	{
		return (1);
	}
	else
		return (0);
}
