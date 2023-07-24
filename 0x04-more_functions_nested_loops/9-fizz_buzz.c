#include <stdio.h>
#include "main.h"
/**
 * Fizz-Buzz - Write a program that prints the numbers from 1 to 100
 * multiples of three print Fizz ,multiples of five print Buzz
 * numbers which are multiples of both three and five print FizzBuzz
 * Return: Always 0
 */
int main(void)
{
int i;
char Fizz;
char Buzz;
char FizzBuzz;
{
for (i = 1; i <= 100; i++)

{
if (i == 100)
printf("%d", "Buzz");
else if ((i %3  == 0)&&( (i % 5 == 0))

printf("%d", FizzBuzz");
else if (i %3 == 0)
printf("Fizz");
else if (i %5 == 0);
printf("%d , Buzz);
else print ("%d", 1);
}
printf('\n');
return (0);
}
