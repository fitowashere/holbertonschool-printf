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
	int i = 0, j = 0;
	int printed_chars = 0;
	int found = 0;
	ck func_type[] = {
		{"c", write_char},
		{"s", write_string},
		{"%", print_mod},
		{"d", write_number},
		{"i", write_number},
		{NULL, NULL}};
	va_list list;
	va_start(list, format);

	if (format == NULL || (format[0] == '%' && format[1] == '\0'))
		return (-1);
	while (format != NULL && format[i]) {
		if (format[i] == '%') {
			i++;
			while (format[i] == ' ')
				i++;
			found = 0;
			for (j = 0; j < 5; j++) {
				if (format[i] == *func_type[j].input) {
					printed_chars += func_type[j].f(list);
					found = 1;
					break;
				}
			} if (!found && format[i] != '\0') {
				putchar('%');
				printed_chars++;
				i--;
			}
		} else {
			putchar(format[i]);
			printed_chars++;
		}
		i++;
	}
	va_end(list);
	return (printed_chars);
}
