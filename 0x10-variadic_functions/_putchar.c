#include <unistd.h>

/**
* _putchar - writes out the characater c to stdout
* @c: character to be printed
* Return: 1 (success), -1 on error
*/
int _putchar(char c)
{
	return (write(1, &c, 1));
}
