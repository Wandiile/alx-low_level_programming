#include "main.h"

/**
* _isdigit - checks for a digit
* @c: the character to e checked
* Return: 1 for a digit character and 0 dor anything else
*/

int _isdigit(int c)
{
if (c >= 48 && c <= 57)
{
return (1);
}
return (0);
}
