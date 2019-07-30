#include "holberton.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * op_char - calls function
 * @list: string struct
 *
 * Return: 0
 */
int op_char(va_list list)
{
	char c = va_arg(list,  int);
	_putchar(c);
	return (0);
}
/**
 * op_int - calls function
 * @list: string struct
 *
 * Return: 0
 */
int op_int(va_list list)
{
	_putchar(va_arg(list, int) + '0');
	return (0);
}
/**
 * op_char_ptr - calls function
 * @list: string struct
 *
 * Return: 0
 */
int op_char_ptr(va_list list)
{
	int a;
	char *str;

/**/
	printf("op_char_ptr");

	str = va_arg(list, char *);

	if (str == NULL)
	a = 0;
	while (str[a])
	{
/**/
		printf("inside str print loop");
		_putchar(str[a]);
		a++;
	}
	return (0);
}
