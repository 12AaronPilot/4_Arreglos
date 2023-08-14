#pragma once

//Clase de arreglo dinamico de 4 bytes
typedef unsigned __int32 uint32;
class Array
{
	size_t size;

public:
	uint32* array;

	//ctor
	Array(size_t newsize) 
	{
		size = newsize;
		array = new uint32(size);
	}

	//Detructor
	~Array()
	{
		if (array != nullptr)
		{
			delete[] array;
			size = 0;
		}
	}

	//Declarar los metodos get set
	uint32 Set(size_t index, const char* bytes);
	uint32 Get(size_t index);
	void Set(size_t index, uint32 newvalue);

	size_t Size()
	{
		return size;
	}

	void Clear();


};
 