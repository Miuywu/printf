#include "holberton.h"

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
	_printf("-format- args:%i, %c, %s", 1, 'H', "lberton");
	_printf("-format- 1 Percent:[%]");
	_printf("-format- 2 Percent:[%%]");
	_printf("-format- 3 Percent:[%%%]");
	_printf("-format- 4 Percent:[%%%%]");
	_printf("-format- invalid specifier:[%r]");
	return (0);
}
