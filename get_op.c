#include "main.h"

/**
 **get_print - gets function to be used
 *@format: format to compare
 *Return: function or null
 */

int (*get_print(char format))(va_list)
{
	int i = 0;
	ck func_type[] = {
		{"c", write_char},
		{"s", write_string},
		{"%", print_mod},
		{"d", write_number},
		{"i", write_number},
		{"r", print_reverse},
		{NULL, NULL}
	};

	while (func_type[i].input)
	{
		if (format == func_type[i].input[0])
			return (func_type[i].f);
		i++;
	}
	return (NULL);
}
