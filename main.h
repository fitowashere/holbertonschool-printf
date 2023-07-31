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
 *typedef struct check- creats struck
 *@input: stores data
 *@f: used to call the functions
 */

/**
 *struct check ck - new name to call the struck
 */


typedef struct check
{
char *input;
int (*f)(va_list);
} ck;

/*start of variatic function*/
int (*get_print(char format))(va_list);
int write_char(va_list list);
int write_string(va_list list);
int write_number(va_list list);
int print_mod(va_list list);
int print_reverse(va_list list);

#endif

