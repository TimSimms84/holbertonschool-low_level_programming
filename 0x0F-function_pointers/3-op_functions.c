#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>


/**
 * op_add - adds two intergers
 * @a: first interger
 * @b: second interger
 * Return: answer
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - subtracts two intergers
 * @a: first interger
 * @b: second interger
 * Return: answer
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiplies two intergers
 * @a: first interger
 * @b: second interger
 * Return: answer
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - divides two intergers
 * @a: first interger
 * @b: second interger
 * Return: answer
 */
int op_div(int a, int b)
{
	/* divide by 0 check*/
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
 * op_mod - Modulo two intergers
 * @a: first interger
 * @b: second interger
 * Return: answer
 */
int op_mod(int a, int b)
{
	/* modulo by 0 check*/
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
