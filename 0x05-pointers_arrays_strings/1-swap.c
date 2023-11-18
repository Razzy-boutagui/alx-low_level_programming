#include"main.h"

/**
 * swap_int - swap integers
 *
 * @a: first int
 * @b: second int
 *
 */

void swap_int(int *a, int *b)
{
	int c, d;

	c = *b;
	d = *a;
	*b = d;
	*a = c;
}
