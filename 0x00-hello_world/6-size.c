#include <stdio.h>
/**
* main - A program that prints various computer sizes
* Return - 0 (success)
*/
int main(void)
{
	char c;
	int i;
	long int l;
	long long int ll;
	float f;

	printf("Size of char: %lu byte(s)\n",  sizeof(acharacter));
	printf("Size of an int: %lu byte(s)\n", sizeof(ainteger));
	printf("Size of long int: %lu byte(s)\n",  sizeof(along));
	printf("Size of long long int: %lu byte(s)\n",  sizeof(alonglong));
	printf("Size of float: %lu byte(s)\n",  sizeof(afloat));
	return (0);
}
