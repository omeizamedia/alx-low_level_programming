#include "main.h"

/**
 * binary_to_uint - converts a binary number to unsigned int
 * @z: string containing the binary number
 *
 * Return: the converted number
 */
unsigned int binary_to_uint(const char *z)
{
	int y;
	unsigned int dv = 0;

	if (!z)
		return (0);

	for (y = 0; z[y]; y++)
	{
		if (z[y] < '0' || z[y] > '1')
			return (0);
		dv = 2 * dv + (z[y] - '0');
	}

	return (dv);
}
