#include "main.h"

/**
* _strlen - string length
* @s: parameter
* Return: int
*/
int _strlen(char *s)
{
	int count = 0;
	while (s[count] != '\0')
	{
	count++;
	}
	return (count);
}
