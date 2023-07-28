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
	int count;

	if (*s == '\0')
	{
		write(1, "(nil)", 5);
		return (0);
	}
	else
		while (*s != '\0')
		{
			count += putchar(*s++);
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

	num = va_arg(list, int);
	if (num == 0)
	{
		return (putchar('0'));
	}
	/*if negative prints the negative sign and cancels the negative of the input*/
	if (num < 0)
	{
		putchar('-');
		num = -num;
	}
	/*stores the input from right to left in new string*/
	while (num != 0)
	{
		num_str[len++] = num % 10 + '0';
		num /= 10;
	}
	/*prints in revers to get the correct order*/
	for (i = len - 1; i >= 0; i--)
	{
		putchar(num_str[i]);
	}
	return (len);
}

