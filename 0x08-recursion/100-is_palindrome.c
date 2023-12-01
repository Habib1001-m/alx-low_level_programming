#include "main.h"

/**
 * is_palindrome - Checks if a string is a palindrome.
 * @s: The string to be checked.
 *
 * Return: 1 if the string is a palindrome, 0 otherwise.
 */
int is_palindrome(char *s)
{
    int len = _strlen_recursion(s);

    return helper_palindrome(s, len);
}

/**
 * helper_palindrome - A helper function for checking palindromes.
 * @s: The string to be checked.
 * @len: The length of the string.
 *
 * Return: 1 if the string is a palindrome, 0 otherwise.
 */
int helper_palindrome(char *s, int len)
{
    if (len <= 1)
        return 1;
    else if (*s != s[len - 1])
        return 0;
    else
        return helper_palindrome(s + 1, len - 2);
}
