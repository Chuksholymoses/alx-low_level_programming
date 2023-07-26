#include "main.h"
#include <stdio.h>

/**
 * leet - Write a function that encodes a string into 1337
 * @s: analized string
 * Return: Mozart composed music
 */
char *leet(char *s)
{
char a[] = "aeotlAEOTL";
char n[] = "4307143071";
int i = 0;
int j;
while (*(s + i) != '\0')
{
for (j = 0; j <= 9; j++)
{
if (*(s + i) == a[j])
{
*(s + i) = n[j];
}
}
i++;
}
return (s);
}
