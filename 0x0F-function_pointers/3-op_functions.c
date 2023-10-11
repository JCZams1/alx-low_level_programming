#include "3-calc.h"

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

/**
 * op_add - a function that returns
 * the sum of a and b.
 * @a: input integer.
 * @b: input integer.
 * Return: The result of the sum of a and b.
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - a function that returns the
 * difference of a and b.
 * @a: input integer.
 * @b: input intger.
 * Return: The result of the difference
 * between a and b.
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - a function that returns
 * the product of a and b.
 * @a: input integer.
 * @b: input integer.
 * Return: result of the of a * b.
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - a function that returns
 * the division of a and b.
 * @a: input integer.
 * @b: input integer.
 * Return: The result of a/b.
 */
int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - a function that returns
 * the remainder of the division of a by b
 * @a: input integer.
 * @b: input integer.
 * Return: Remainder of a / b.
 */
int op_mod(int a, int b)
{
	return (a % b);
}
