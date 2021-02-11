#include "holberton.h"
/**
* print_last_digit - Print last digit
* @n: Number to calculate last number
* Return: las number of n
*/

int print_last_digit(int n)
{
int r = n % 10;
if (r > 0)
{
	_putchar(r + '0');
	return (r);
}
else
{
r = -r;
_putchar(r + '0');
return (r);
}
}
