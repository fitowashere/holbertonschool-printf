#include "main.h"

/*
 * _printf - prints output according to format
 * @format: stores data
 * Return: results
 */

void get_op(const char* format, va_list args)
{
    int i, count, num;
    char *s;
    char c;

    if (*format == 'i' || *format == 'd')
       {
         num = va_arg(args, int);
        char numstrn[20];
        count = 0;

        if (num < 0)
        {
            num = -num;
            write(1, "-", 1);  // Write negative sign
        }

        while (num != 0)
        {
            numstrn[count++] = '0' + (num % 10);
            num /= 10;
        }

        for (i = count - 1; i >= 0; i--)
           {
            write(1, &numstrn[i], 1);  // Write each digit
        }
    }
    else if (*format == 's')
       {
        // Handle %s format specifier
         s = va_arg(args, char*);
        write(1, s, strlen(s));
    }
       else if (format == 'c')
       {
        // Handle %c format specifier
         c = va_arg(args, int);
        write(1, &c, 1);
    }
       else if (*format == '%')
       {
        // Handle %% format specifier
        write(1, "%", 1);
    }
       else
       {
        write(1, format, 1);  // Write non-format characters
    }
}

int _printf(const char* format, ...)
{
    va_list args;
    va_start(args, format);

    while (*format != '\0')
       {
        get_op(format, args);
        format++;
    }

    va_end(args);
}

