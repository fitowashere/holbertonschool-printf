#include "main.h"

/**
 *print_op- gets inputs
 *@format: store input
 *@print_data: stores structure
 *@list: stores list
 *Return: results
 */

int print_op(const char *format, ck *print_data)
{
	char a;
	int count = 0, b = 0, c = 0;

	a = format[b];
	while (a != '\0')
	{
		if (a == '%')
		{
			b++;
			a = format[b];
			while (print_data[c].f != NULL && a != *(print_data[c].input))
			{
				c++;
			}
			if (print_data[c].f != NULL)
			{
				count += print_data[c].f(list);
			}
			else
			{
				if (a == '\0')
					return (-1);
				if (a != '%')
				{
					putchar('%');
					count++;
				}
				putchar(a);
				count++;
			}
		}
		else
		{
			putchar(a);
			count++;
	}
		b++;
		a = format[b];
	}
	return (count);
}
