#include "main.h"

/**
 * clear_bit - sets the value of a given bit to 0
 * @num: pointer to the number to change
 * @idx: index of the bit to clear
 *
 * Return: 1 for success, -1 for failure
 */
int clear_bit(unsigned long int *num, unsigned int idx)
{
	if (idx > 63)
		return (-1);

	*num = (~(1UL << idx) & *num);
	return (1);
}
