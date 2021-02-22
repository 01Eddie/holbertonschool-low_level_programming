#include "holberton.h"

/**
 * print_number- short description, single line
 * @n: integer
 * Return: void
*/

void print_number(int n)
{
	int num, exp, digit, lDig;

	exp = 1;
	lDig = n % 10;
	n = n / 10;
	num = n;

	if (n < 0)
	{
		_putchar('-');
		num = -num;
		n = -n;
		lDig = -lDig;
	}

	if (n > 0)
	{
		for (; num / 10 != 0; num = num / 10)
		{
			exp = exp * 10;
		}
		num = n;

		for (; exp > 0; exp = exp / 10)
		{
			digit = num / exp;
			_putchar(digit + '0');
			num = num - (digit * exp);
		}
	}
	_putchar(lDig + '0');

}
