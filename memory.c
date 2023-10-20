#include "shell.h"

/**
 * bfree - frees a pointer and NULLs the address
 * @memoire: address of the pointer to free
 *
 * Return: 1 if freed, otherwise 0.
 */
int bfree(void **memoire)
{
	if (memoire && *memoire)
	{
		free(*memoire);
		*memoire = NULL;
		return (1);
	}
	return (0);
}
