#ifndef _H_TRIANGLE
#define _H_TRIANGLE

#include "Object.h"
#include "Camera.h"

class triangle : public object
{
public:
	Position angle[3];
	
	void display(Camera& camera);
};

#endif