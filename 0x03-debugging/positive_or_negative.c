#include "main.h"
/**
 * main - Determine if a number is positve, negetive or zero
 * 0: is the number to be checked
 * return: 0 on success
 */
void positive_or_negetive(int i)
{
if (i < 0)
{
printf("%d is %s\n", i, "negetive");
}
else if (i > 0)
{
printf("%d is %s\n", i, "positive");
}
else
{
printf("%d is %s\n", i, "zero");
return;
}
