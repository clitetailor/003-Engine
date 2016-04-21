// Camera.h

#ifndef _H_CAMERA
#define _H_CAMERA

#include <winbgim.h>
#include <math.h>

// WindowMaxX 600
// WindowMaxY 600
// F 300

class Camera
{
private:
	int width;
	int height;
	int f;
	short int ** screendepth
public:
	Camera(int width, int height);

	void resetscreen();
	void putvoxel(int x, int y, int x);
	
	~Camera();
};

#endif