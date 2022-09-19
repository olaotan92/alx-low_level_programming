#include "main.h"
/**
* _puts - prints a string to stdout followed by a new line
* @str: parameters
*/
void _puts(char *str)
{
int i = 0;
for (i = 0; str [i] != '\0'; i++)
_putchar(str[i]);
_putchar('\n');
}
