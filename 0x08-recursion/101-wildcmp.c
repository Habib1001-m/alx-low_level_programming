#include "main.h"

/**
 * wildcmp - Compares two strings and returns 1 if they can be considered identical.
 * @s1: The first string.
 * @s2: The second string with wildcards.
 *
 * Return: 1 if the strings can be considered identical, 0 otherwise.
 */
int wildcmp(char *s1, char *s2)
{
    if (*s2 == '*')
    {
        if (*(s2 + 1) == '*')
            return wildcmp(s1, s2 + 1);
        return (wildcmp(s1, s2 + 1) || wildcmp(s1 + 1, s2));
    }
    else if (*s1 == '\0' && *s2 == '\0')
        return 1;
    else if (*s1 == *s2)
        return wildcmp(s1 + 1, s2 + 1);

    return 0;
}