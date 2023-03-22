#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * print_strings - prints strings, followed by a new line
 * @separator: char string to be printed between numbers
 * @n: number of arguments
 * Return: void
 */
void print_strings(const charseparator, const unsigned int n, ...)
{
unsigned int i;
char string;
va_list data;
va_start(data, n);
for (i = 0 ; i < n ; i++)
{
string = va_arg(data, char);
if (string == NULL)
{
string = "(nil)";
}
printf("%s", string);
if (separator != NULL && i < n - 1)
{
printf("%s", separator);
}
}
va_end(data);
printf("\n");
}
