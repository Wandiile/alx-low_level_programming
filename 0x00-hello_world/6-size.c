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

	printf("Size of char: %lu byte(s)\n",  sizeof(char));
	printf("Size of an int: %lu byte(s)\n", sizeof(int));
	printf("Size of long int: %lu byte(s)\n",  sizeof(long));
	printf("Size of long long int: %lu byte(s)\n",  sizeof(long long));
	printf("Size of float: %lu byte(s)\n",  sizeof(float));
	return (0);
}
