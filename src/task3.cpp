#include "task3.h"

unsigned long long sumPrime(unsigned int hbound)
{
	unsigned long long sum = 0;
	for (unsigned int i = 0; i < hbound; i++)
	{
		if (i == 1)
			sum += i;
		else if (i == 2)
			sum += i;
		else
		{
			bool f = true;
			for (unsigned int j = 2; j < i / 2 + 1; j++)
			{
				if (i % j == 0)
				{
					f = false;
					break;
				}
			}
			if (f)
				sum += i;
		}
	}
	return sum;
}