#include "Array.h"

uint32 Array::Get(size_t index)
{
	if (index < size)
		return array[index];
	else return 0;
}

void Array::Set(size_t index, uint32 newvalue)
{
	if (index < size)
	{
		array[index] = newvalue;
	}
}
