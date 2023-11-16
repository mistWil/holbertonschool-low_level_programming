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
		switch (format[i])
		{
			case 'c':
				printf("%c", va_arg(args, int));
				break;
			case 'i':
				printf("%d", va_arg(args, int));
				break;
			case 'f':
				printf("%f", va_arg(args, double));
				break;
			case 's':
				str = va_arg(args, char *);
				if (str == NULL)
				{
					printf("(nil)");
				}
				else
				{
					printf("%s", str);
				}

				break;
			default:
				i++;
				continue;
		}

		if (format[i + 1] != '\0') {
			printf(", ");
		}

		i++;
	}

	va_end(args);

	printf("\n");
}

