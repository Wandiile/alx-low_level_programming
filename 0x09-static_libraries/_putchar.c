#include <unistd.h>

/**
* _putchar -wites out the character c to stdout
* @c: character to print
* Return: 1 on Success, -1 on error
*/
int _putchar(char c)
{
	return (write(1, &c, 1));
}
