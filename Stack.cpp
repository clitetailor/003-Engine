#include "Stack.h"


Stack::Stack(int size) : top(0), size(size)
{
	int i;
	for (i = 0; i < size; ++i)
	{
		object[i] = NULL;
	}
};


Stack::~Stack()
{
	int i;
	for (i = 0; i < size; ++i)
	{
		if (object[i] != NULL)
		{
			delete [] object[i];
		}
	}
	
	delete [] object;
}

void Stack::add(Object& object)
{
	Object object[top] = &object;
	
	++top;
}

void Stack::remove(int i)
{
	delete object[i];
	
	Object[i] = Object[top];
	Object[top] = NULL;
	
	--top;
}

Object& Stack::get(int i)
{
	return object[i];
}