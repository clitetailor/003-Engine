#ifndef _H_CUBE
#define _H_CUBE

#include <wingdi.h>
#include "Object.h"
#include "Camera.h"

class Cube : public Object
{
public:
	void display(Camera& camera);
};

#endif