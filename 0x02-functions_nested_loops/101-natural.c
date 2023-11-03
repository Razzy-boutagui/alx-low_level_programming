#include <stdio.h>

/***/



int sum-natural(void)
{
	int a = 3;
	int b = 5;
	int x, number, new_number;
	for (x = 0; x < 1024; x++)
	{
		if (x % a == 0 || x % b == 0)
		{
			number = x;
			new_number = number + x;
				
		}
	}
	return (new_number);
}
