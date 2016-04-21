#include "Object.h"

class Stack
{
private:
	Object * object;
	int size;
	int top;
public:
	Stack(int size);
	~Stack();
	
	void add(Object& object);
	void remove(int i);
	
	Object& get(int i);
	
	int getsize();
};