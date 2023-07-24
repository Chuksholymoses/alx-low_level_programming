#include "main.h"
/**
 *_strlen - Write a function that returns the length of a string
 *@s: strings to be checked
 * Return: Always 0.
 */
int _strlen(char *s)
{
int string_length = 0;
while (s[string_length])
string_length++;
return (string_length);
}
