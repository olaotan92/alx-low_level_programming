#include "main.h"
/**
* _strcopy - copies the string pointed to by src
* @dest: destination
* @src: source
* Return: the pointer to dest
*/
char *_strcopy(char *dest, char *src)
{
int count = 0;
while (count >= 0)
{
*(dest + count) = *(src + count);
if (*(src + count) == '\0')
break;
count++;
}
return (dest);
}
