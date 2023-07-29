#include "main.h"

/**
 *print_op- gets inputs
 *@format: store input
 *@print_data: stores structure
 *@list: stores list
 *Return: results
 */

int _printf(const char *format, ...)
{
	int count;
	char a;
	int b = 0;

	va_list list;
	va_start(list, format);

	while ((a = format[b]) != '\0') {
		if (a == '%') {
			b++;
			a = format[b];
			if (a == 'c') {
				count += write_char(list);
			} else if (a == 's') {
				count += write_string(list);
			} else if (a == 'd' || a == 'i') {
				count += write_number(list);
			} else if (a == '%') {
				putchar(a);
				count++;
			} else {
				putchar(a);
				count ++;
			}
		} else {
			putchar(a);
			count++;
		}
		b++;
	}

	va_end(list);
	return (count);
}


