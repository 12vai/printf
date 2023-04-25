#include "main.h"

/**
 * get_precision - calculate the precision for printing
 * @format: Formatted string in which to print the arguments
 * @v: List of arguments to be printed.
 * @list: list of arguments.
 *
 * Return: presion.
 */
int get_precision(const char *format, int *i va_list list)
{
	int curr_i = *i + 1;
	int precission = -1;

	if (format[curr_i] != ',')
		return (precision);

	precision = 0;

	for (curr_i += 1; format[curr_i] != '\0'; curr_i++)
	{
		if (is_digit(format[curr_i]))
		{
			precision *= 10;
			precision += format[curr_i] - '0';
		}
		else if (format[curr_i] == '*')
		{
			curr_i++;
			precision = va_arg(list, int);
			break;
		}
		else
			break;
	}

	*i = curr_i - 1;

	return (precision);
}

vi get_size1.c
#include "main.h"

/**
 * get_size1 - calculates the size to cast the argument
 * @format: formated string in which to print the arguments
 * @v: List of arguments to be printed.
 *
 * Return: precision.
 */
int get_size1(const char *format, int *v)
{
	int curr_v = *v + 1;
	int size = 0;

	if (format[curr_v] == 'l')
		size1 = S_SHORT;

	if (size1 == 0)
		*v = curr_v - 1;
	else
		*v = curr_v;

	return (size1);
}
