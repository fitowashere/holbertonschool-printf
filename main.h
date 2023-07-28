#ifndef main_h
#define main_h
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <ctype.h>

char _putchar(char c);
int _printf(const char *format, ...);

typedef struct check
{
char *input;
int (*f)(va_list);
} ck;
/*start of variatic function*/
int print_op(const char *format, ck *print_data, va_list list);
int write_char(va_list list);
int write_string(va_list list);
int write_number(va_list list);


/* check if i can use function pointers this is part of the extra fucntions
void write_string(const char *str);
void write_char(char c);
void write_number(int num, int base);
void write_hex(unsigned int num, int uppercase);
void write_pointer(void *ptr);
int get_op(const char* format, va_list args);
*/
#endif

