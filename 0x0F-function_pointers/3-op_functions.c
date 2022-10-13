#include "3-calc.h"

/**
 * op_add - returns the sum of a and b
 * @a: the first integer to be added to b
 * @b: the second integer to be added to a
 *
 * Return: sum of a and b
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - returns the difference of a and b
 * @a: the first integer
 * @b: the second integer
 *
 * Return: difference of a and b
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - returna the product of a and b
 * @a: the first integer to be multiplied with b
 * @b: the second integer to be multiplied with a
 *
 * Return: the product of a and b
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - returns the result of the division of a by b
 * @a: the first integer to be divided by b
 * @b: the second integer that divides a
 *
 * Return: the result of the division of a by b
 */
int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - returns the remainder of the division of a by b
 * @a: the first integer to be divided by b
 * @b: the second integer that divides a
 *
 * Return: the remainder of the division of a by b
 */
int op_mod(int a, int b)
{
	return (a % b);
}
