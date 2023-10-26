#include <unistd.h>

/**
* _putchar - writes out the character to stdout
* @c: character to be printed
* Return: 1 (Success) 0(Error)
*/
int _putchar(char c)
{
	return (write(1, &c, 1));
}
