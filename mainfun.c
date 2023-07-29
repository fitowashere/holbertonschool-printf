#include "main.h"

/**
 * write_char- gets input
 * @list: store input
 * Return: results
 */

int write_char(va_list list)
{
	char c = va_arg(list, int);
	int count = 0;

	count++;
	putchar(c);
	return (count);
}

/**
 *write_string- gets input
 *@list: store input
 *Return: results
 */

int write_string(va_list list)
{
	char *s = va_arg(list, char *);
	int count = 0;

	if (s == NULL)
	{
		s = "(null)";
	}
	while (*s != '\0')
	{
		putchar(*s++);
		count++;
	}
	return (count);
}

/**
 * write_number- gets input
 *@list: store input
 *Return: results
 */

int write_number(va_list list)
{
	int number = va_arg(list, int);
	unsigned int absolute_value;
	char digit;
	int exponent = 1;
	int lenght = 0;

	if (number < 0)
	{
		digit = '-';
		lenght = lenght + write(1, &digit, 1);
		absolute_value = number * -1;
	}

	else
		absolute_value = number;

	while (absolute_value / exponent > 9)
	{
		exponent *= 10;
	}

	while (exponent != 0)
	{
		digit = absolute_value / exponent + '0';
		lenght = lenght + write(1, &digit, 1);
		absolute_value = absolute_value % exponent;
		exponent = exponent / 10;
	}
	return (lenght);
}
