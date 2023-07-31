#include "main.h"

/**
 *_printf- gets inputs
 *@format: store inpute
 *Return: results
 */

int _printf(const char *format, ...)
{
	if (format != NULL)
	{
		int i = 0, printed_chars = 0;
		va_list list;
		int (*this_thing)(va_list);

		va_start(list, format);
		if (format[0] == '%' && format[1] == '\0')
			return (-1);
		while (format != NULL && format[i] != '\0')
		{
			if (format[i] == '%')
			{
				if (format[i + 1] == '%')
				{
					printed_chars += putchar(format[i]);
					i += 2;
				}
				else
				{
					this_thing = get_print(format[i + 1]);
					if (this_thing)
						printed_chars += this_thing(list);
					else
						printed_chars = putchar(format[i]) + putchar(format[i + 1]);
					i += 2;
				} /*end if else*/
			} /*end if */
			else
			{
				printed_chars += putchar(format[i]);
				i++;
			} /*end outer if else*/
		} /*end while*/
		va_end(list);
		return (printed_chars);
	} /*end function*/
	return (-1);
}
