#include "holberton.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * _printf - calls function
 * @format: list of types of arguments passed to the function
 * Description: Function that prints anything
 * Return: 0
 */
int _printf(const char *format, ...)
{
	int i = 0, j = 0, counter = 0;
	va_list list;
	op_t f_ops[] = {
		{"c", op_char},
		{"s", op_char_ptr},
		{"i", op_int},
		{"d", op_int},
		{"u", op_unsigned},
		{NULL, NULL}
	};

	va_start(list, format);
	if (format == NULL)
		return (-1);
	while (format && format[i])
	{
		if (format[i] == '%' && format[i + 1] != '\0')
		{
			for (j = 0; f_ops[j].c != NULL; j++)
				if (*f_ops[j].c == format[i + 1])
				{
					counter += f_ops[j].ch(list);
					break;
				}
			if (f_ops[j].c == NULL)
			{
				counter += _putchar(format[i]);
				if (format[i + 1] != '%')
					counter += _putchar(format[i + 1]);
			}
			i += 2;
		}
		else
		{
			counter += _putchar(format[i]);
			i++;
		}
	}
	va_end(list);
	return (counter);
}
