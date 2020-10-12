#include "task1.h"


unsigned long findValue(unsigned int min, unsigned max)
{
	unsigned int result = max;
	for (unsigned int i = min; i < max; i++)
	{
		if (result % i != 0)
			result *= i;
	}
	return result;
};