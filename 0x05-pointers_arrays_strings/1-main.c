#include "holberton.h"
#include <stdio.h>

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
	int a;
	int b;

	a = 98;
	b = 42;
	rintf("a=%d, b=%d\n", a, b);
	wap_int(&a, &b);
	rintf("a=%d, b=%d\n", a, b);
	return (0);
}
