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
	int num;
	char num_str[12];
	int len = 0, i;
	int count = 0;
	char min_str[] = "-2147483649";

	num = va_arg(list, int);
	if (num == 0)
	{
		count++;
		putchar('0');
		return(count);
	}
	if (num == INT_MIN)
	{
		for (i = 0; i < 11; i++)
		{
			putchar(min_str[i]);
			count++;
		}
		return(count);
	}
		if (num < 0)
		{
			putchar('-');
			num = -num;
			count++;
		}
		while (num != 0)
		{
			num_str[len++] = num % 10 + '0';
			num /= 10;
		}
		for (i = len - 1; i >= 0; i--)
		{
			putchar(num_str[i]);
			count++;
		}
		return (count);

}
