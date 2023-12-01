#include "main.h"

/**
 * is_prime_number - Checks if a number is a prime number.
 * @n: The number to be checked.
 *
 * Return: 1 if the number is prime, 0 otherwise.
 */
int is_prime_number(int n)
{
    return helper_prime(n, 2);
}

/**
 * helper_prime - A helper function for checking prime numbers.
 * @n: The number to be checked.
 * @i: The current divisor.
 *
 * Return: 1 if the number is prime, 0 otherwise.
 */
int helper_prime(int n, int i)
{
    if (n < 2)
        return 0;
    else if (i == n)
        return 1;
    else if (n % i == 0)
        return 0;
    else
        return helper_prime(n, i + 1);
}
