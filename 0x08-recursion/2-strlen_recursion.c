#include "main.h"

/**
 * _strlen_recursion - returns the length of a string
 * @s: string that the length is to be calculated
 *
 * Return: length of the string
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return(1 + _strlen_recursion(s + 1));
}
