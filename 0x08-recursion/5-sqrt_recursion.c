#include "main.h"

/**
 * check - Checks for the square root.
 * @a: Integer.
 * @b: Integer.
 *
 * Return: Integer.
 */
int check(int a, int b)
{
	if (a * a == b)
		return (a);
	if (a * a > b)
		return (-1);
	return (check(a + 1, b));
}

/**
 * _sqrt_recursion - Returns the natural square root of a number.
 * @n: Integer to find the square root of.
 *
 * Return: Natural square root or -1.
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (0);
	else
		return (check(1, n));
}}
