#include "main.h"

/**
 * _strlen - Returns the length of a string.
 * @s: pointer to string
 *
 * Return: The length of the string
 */
int _strlen(char *s)
{
int c = 0;

for (; *s != '\0'; s++)
{
c++;
}

return (c);
}
