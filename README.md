C - printf - By Hector Rodriguez & Oscar Morell

A collaborative project Software Engineering to implement the inbuilt printf function in c from scratch.

Tasks

0. I'm not going anywhere. You can print that wherever you want to. I'm here and I'm a Spur for life

Write a function that produces output according to a format.

Prototype: int _printf(const char *format, ...);
Returns: the number of characters printed (excluding the null byte used to end output to strings)
write output to stdout, the standard output stream
format is a character string. The format string is composed of zero or more directives. See man 3 printf for more detail. You need to handle the following conversion specifiers:
c
s
%
You don’t have to reproduce the buffer handling of the C library printf function
You don’t have to handle the flag characters
You don’t have to handle field width
You don’t have to handle precision
You don’t have to handle the length modifiers

1. Education is when you read the fine print. Experience is what you get if you don't

Handle the following conversion specifiers:

d
i
You don’t have to handle the flag characters
You don’t have to handle field width
You don’t have to handle precision
You don’t have to handle the length modifiers

2. Just because it's in print doesn't mean it's the gospel

Create a man page for your function.


Files
_printf.c
_putchar.c
binary.c
char.c
hex.c
len.c
octal.c
unsigned.c
man 3 printf
main.h
main.c
get_op_function.c
mainfun.c


Example

Example for char:
Input: _printf("%c", H);
Output: H

Example for string:
Input: _printf("%s", "I am a string !");
Output: I am a string !

Example for digit:
Input: _printf("%d", -762534);
Output: -762534

Example for interger:
Input: _printf("%i", 39);
Output: 39
