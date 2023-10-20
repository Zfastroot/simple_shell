#include "shell.h"

/**
 * bfree - frees a pointer and NULLs the address
 * @adress: address of the pointer to free
 *
 * Return: 1 if freed, otherwise 0.
 */
int bfree(void **adress)
{
	if (adress && *adress)
	{
		free(*adress);
		*adress = NULL;
		return (1);
	}
	return (0);
}
