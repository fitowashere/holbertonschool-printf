#include "main.h"

/**
 * write_char- gets input
 * @list: store input
 * Return: results
 */

int write_char(va_list list)
{
	/*variables*/
	int count = 0;

	putchar(va_arg(list, int));
	count++;
	return (count);
}

/**
 *write_string- gets input
 *@list: store input
 *Return: results
 */

int write_string(va_list list)
{
	char *string = va_arg(list, char *);
	int count = 0;
	int i = 0;

	if (string == NULL)
		string = "(null)";
	for (i = 0; string[i]; i++)
	{
		write(1, &string[i], 1);
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
	char character = '%';

	write(STDOUT_FILENO, &character, 1);
	count++;
	(void)list;
	return (count);
}

/**
 * print_reverse- gets input
 * @list: stores input
 * Return: results
 */

int print_reverse(va_list list)
{
	char *string = va_arg(list, char *);
	int count = 0;

	unsigned int long i = 0, size = strlen(string);

	if (string == NULL)
		string = "(null)";
	for (i = size; i > 0; i--)
	{
		putchar(string[i]);
		count++;
	}
	return (count);
}
