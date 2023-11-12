#include<stdio.h>

/**
 * main - calculat prime number
 *
 */
 
int main(void)
{
        long long number = 612852475143;
        long long prime_factory;

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
             printf("%lld\n", prime_factory);
             return 0;
}
