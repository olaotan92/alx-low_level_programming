#include <stdio.h>
/**
* main - Entry point
*
* Return: Always 0 (Success)
*/
int main(void)
{
int i;
unsigned long int j, k, l, m;
j = 1;
k = 2;
l;
m = 0;
for (i = 1; i <= 33; ++i)
{
if (j < 4000000 && (j % 2) == 0)
{
m = m + j;
}
l = j + k;
j = k;
k = 1;
}
printf("%lu\n", m);
return (0);
}
