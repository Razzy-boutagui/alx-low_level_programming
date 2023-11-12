#include<stdio.h>

/**
 * main - calculat prime number
 *
 */
 
int main(void)
{
        long number = 612852475143;
        long prime_factory;

        for (prime_factory = 2; prime_factory * prime_factory <= number; prime_factory++)
        {
                while (number % prime_factory == 0)
                {
                        if (number % prime_factory == 0)
                        {
                                number = number / prime_factory;
                        }
                }
        }
             printf("%ld\n", prime_factory);
             return 0;
}
