#pragma once

template <typename T>
class GenericArray
{
	stze_t size;
	T* array;

public:

	GenericArray(size_t newsize)
	{
		size = newsize;
		array = new T[newsize];
	}
	~GenericArray()
	{
		if(array != nullptr)
	}
	T& opeerator[](size_t index)
	{
		return array[index];
	}
	T&
};

