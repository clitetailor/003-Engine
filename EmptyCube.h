#ifndef _H_EMPTYCUBE
#define _H_EMPTYCUBE

#include "Object.h"
#include "Camera.h"

class EmptyCube : public Object
{
	public:
		void display(Camera& camera);
};

#endif