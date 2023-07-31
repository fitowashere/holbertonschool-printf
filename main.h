#ifndef main_h
#define main_h
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <ctype.h>
#include <limits.h>

char _putchar(char c);
int _printf(const char *format, ...);

/**
 *struct check- creats struck
 *@input: stores data
 *@f: used to call the functions
 */

typedef struct check
{
char *input;
int (*f)(va_list);
} ck;


/*start of variatic function*/
int write_char(va_list list);
int write_string(va_list list);
int write_number(va_list list);
int print_mod(va_list list);
int print_reverse(va_list list);
int get_op(const char *format, va_list list);

#endif

