#include "main.h"

/**
 * _printf- gets input form main
 *@format: store input
 *Return: results
 */

int _printf(const char *format, ...)
{
	va_list list;
	int a = 0;
	ck ops[] = {
		{"c", write_char},
		{"s", write_string},
		{"d", write_number},
		{"i", write_number},
		{NULL, NULL}
	};

	if (format == NULL)
	{
		return (-1);
	}

	va_start(list, format);
	a = print_op(format, ops, list);
	va_end(list);
	return (a);
}
