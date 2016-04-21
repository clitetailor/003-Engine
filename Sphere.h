#ifndef _H_SPHERE
#define _H_SPHERE

#include "Object.h"
#include "Camera.h"
#include <math.h>

class Sphere : public Object
{
private:
	int radius;
public:
	Sphere() : radius(10) {};
	void display();
};

#endif