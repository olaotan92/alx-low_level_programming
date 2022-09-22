#include "main.h"
/**
* cap_string - capitalizes every first letter of a word in a string
* seperators of words are: space, tabulation
* new line, ,, ;, ., !, ?, ", (, ), {, and }.
* @s: pointer to string.
* Return: pointer to s.
*/
char *cap_string(char *s)
{
int count;
/* scan through string */
count = 0;
while (s[count] != '\0')
{
/* if next character after count is a char, capitalise it */
if (s[0] >= 97 && s[0] <= 122)
{
s[0] = s[0] - 32;
}
if (s[count] == ' ' || s[count] == '\t' || s[count] == '\n'
|| (s[count] == ',' || s[count] == ';' || s[count] == '.'
|| (s[count] == '.' || s[count] == '!' || s[count] == '?'
