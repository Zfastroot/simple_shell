#include "shell.h"

/**
 * bfree - frees a pointer and NULLs the address
 * @str: address of the pointer to free
 *
 * Return: 1 if freed, otherwise 0.
 */
int bfree(void **str)
{
	if (str && *str)
	{
		free(*str);
		*str = NULL;
		return (1);
	}
	return (0);
}
