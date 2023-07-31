#include "main.h"

/**
 * write_char- gets input
 * @list: store input
 * Return: results
 */

int write_char(va_list list)
{
	char c = va_arg(list, int);

	putchar(c);
	return (1);
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
		putchar(*s);
		s++;
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
	int n = va_arg(list, int);
	int num, last = n % 10, digit, exp = 1;
	int i = 1;

	n = n / 10;
	num = n;

	if (last < 0)
	{
		putchar('-');
		num = -num;
		n = -n;
		last = -last;
		i++;
	}
	if (num > 0)
	{
		while (num / 10 != 0)
		{
			exp = exp * 10;
			num = num / 10;
		}
		num = n;
		while (exp > 0)
		{
			digit = num / exp;
			putchar(digit + '0');
			num = num - (digit * exp);
			exp = exp / 10;
			i++;
		}
	}
	putchar(last + '0');
	return (i);
}

/**
 * print_mod- a function that prints a %
 * @list: argument of the list
 * Return: results
 */
int print_mod(va_list list)
{
	/*Variables*/
	int count = 0;
	char c = '%';

	/* write(STDOUT_FILENO, &character, 1);*/
	putchar(c);
	count++;
	(void)list;
	return (count);
}
