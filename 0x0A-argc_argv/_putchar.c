#include <stdio.h>
#include "main.h"

/**
* _putchar - writes the character tp stdout
* @c: character to be printed
* Return: 1 on success, -1 on error
*/
int _putchar(char c)
{
	return (write(1, &c, 1));
}
