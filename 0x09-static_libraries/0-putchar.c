#include <unistd.h>

/**
* _putchar - writes the character c to stdout
* @c: the character to print
* Return: always 1 (Success)
* -1 on error is returned
*/

int _putchar(char c)
{
	return (write(1, &c,1));
}
