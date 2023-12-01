#include "main.h"

/**
 * _sqrt_recursion - Returns the natural square root of a number.
 * @n: The number to calculate the square root of.
 *
 * Return: The square root of n, -1 if n does not have a natural square root.
 */
int _sqrt_recursion(int n)
{
    return helper_sqrt(n, 1);
}

/**
 * helper_sqrt - A helper function for calculating the square root.
 * @n: The number to calculate the square root of.
 * @guess: The current guess for the square root.
 *
 * Return: The square root of n, -1 if n does not have a natural square root.
 */
int helper_sqrt(int n, int guess)
{
    if (n < 0)
        return -1;
    else if (n == 0)
        return 0;
    else if (guess * guess > n)
        return -1;
    else if (guess * guess == n)
        return guess;
    else
        return helper_sqrt(n, guess + 1);
}
