#include "main.h"
#include <stdio.h>
#include <stddef.h>
/**
 * binary_to_uint - convert a binary number to unsigned integer
 * written by Ibrahim Omeiza
 * @b: the pointer to store the numbers
 * Return: return 0 or num.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int num = 0;

	if (b == NULL)
	return (0);
	for (int i = 0; b[i] != '\0'; i++)
	{
	if (b[i] == '0')
	{
	num = (num << 1) | 0;
	}
	else if (b[i] == '1')
	{
	num = (num << 1) | 1;
	}
	else
	{
		return (0);
	}
	}
	return (num);
}
