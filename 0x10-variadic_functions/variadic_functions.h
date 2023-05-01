#ifndef _HEADER_
#define _HEADER_
#include <stdarg.h>
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);

/**
 * struct format - contains the format id and function
 * @tp: format type
 * @f: function to handle
 */
typedef struct format
{
	char *tp;
	void (*f)(va_list args);
} fmt;
void print_char(va_list args);
void print_int(va_list args);
void print_string(va_list args);
void print_float(va_list args);
void print_all(const char * const format, ...);
#endif /* _HEADER_ */
