#include "main.h"
#include <stdio.h>

/**
* main - entry point
* description: prints numbers 1-100 w/
* Fizz for multiples of 3 and buzz for multiples of 5
* and fizzuzz for both
* Return: always 0
*/

int main(void)
{
int i;

for (i = 1; i < 100; i++)
{
if (i % 15 == 0)
	printf("FizzBuzz");
else if (i % 3 == 0)
	printf("Fiziz");
else if (i % 5 == 0)
	printf("Buzz");
else 
	printf(" %i ", i);
if (i < 100)
	printf(" ");
}
printf("\n");
return (0);
}
