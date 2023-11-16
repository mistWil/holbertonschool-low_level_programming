#include <stdarg.h>
#include "variadic_functions.h"
/**
 * print_all - print all
 * @format: const char *
 *
 * Return: void
 */
void print_all(const char * const format, ...)
{
	va_list args;
	unsigned int i = 0;
	char *str;

	va_start(args, format);

	while (format && format[i])
	{
		if (format[i] == 'c')
		{
			printf("%c", va_arg(args, int));
		}
		else if (format[i] == 'i')
		{
			printf("%d", va_arg(args, int));
		} else if (format[i] == 'f')
		{
			printf("%f", va_arg(args, double));
		} else if (format[i] == 's')
		{
			str = va_arg(args, char *);
			if (str == NULL)
				printf("(nil)");
			else
				printf("%s", str);
		}
		if (format[i + 1] != '\0' && (format[i] == 'c'
					|| format[i] == 'i'
					|| format[i] == 'f'
					|| format[i] == 's'))
			printf(", ");

		i++;
	}
	va_end(args);
	printf("\n");
}
