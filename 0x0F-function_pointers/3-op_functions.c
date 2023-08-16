#include "3-calc.h"

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

/**
* op_add - returns sum of two numbers
* @a: first number
* @b: second number
* Return: the sum of a and b.
*/
int op_add(int a, int b)
{

	return (a + b);
}
/**
* op_sub - returns the difference between two numbers
* @a: first number
* @b: second number
* Return: the difference of a and b
*/

int op_sub(int a, int b)
{
	return (a - b);
}
/**
* op_mul - returns product of two numbers
* @a: first number
* @b: second number
* Return: the product of a and b
*/
int op_mul(int a, int b)
{
	return (a * b);
}
/**
* op_div - returns division of two numbers
* @a: first number
* @b: second number
* Return: the quotient of a and b.
*/
int op_div(int a, int b)
{
	return (a / b);
}
/**
* op_mod - returns the remainder of the division of two numbers
* @a: first number
* @b: second number
* Return: the remainder of the division of a by b
*/
int op_mod(int a, int b)
{
	return (a % b);
}

