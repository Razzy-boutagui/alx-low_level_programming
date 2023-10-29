#include"main.h"

/**
 * _abs - entry point
 *
 * @n: parametre
 *
 * Return: return the value of n
 */

int _abs(int n)
{
	if (n < 0)
	{
		n = (n * -1);
	}
	return (n);
}
