#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * _memset - copy char
 * @s: string
 * @b: input
 * @n: number of bytes
 * Return: string
 */
char *_memaet(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}

	return (s);
}
/**
 * *_calloc - allocates memory for an array
 * @nmemb: number of elements 
 * @size: size of byte of each array element
 *
 * Return: pointer to the allocated memory
 * if nmemb or size is 0, returns NULL
 * if malloc fails, returns NULL
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *p;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	p = malloc(nmemb * size);

	if (p == NULL)
	{
		return (NULL);
	}
	_memset(p, 0, (nmemb * size));
	for (i = 0; i < (nmemb * size); i++)
		p[i] = '\0';

	return (p);
}
