// Camera.cpp
#include "Camera.h"
#include <winbgim.h>

Camera::Camera(int width, int height) : width(width), height(height), f(f)
{
	screendepth = new short int* [height];
	
	int i;
	for (i = 0; i < height; ++i)
	{
		screendepth[i] = new short int [width];
		
		int j;
		for (j = 0; j < width; ++j)
		{
			screendepth[i][j] = 20000;
		}
	}
};
	

void Camera::resetscreen()
{
	int i, j;
	for(i = 0; i < height; ++i)
	{
		for (j = 0; j < width; ++j)
		{
			screendept[i][j] = 225;
		}
	}
	
	cleardevice();
	
	return;
}

void Camera::putvoxel(int x, int y, int z, int color)
{
	int p_x = ( WindowMaxX / 2 + x * F / (F + z) );
	int p_y = ( WindowMaxY / 2 - y * F / (F + z) );
	
	if (0 > p_x || p_x > WindowMaxX || 0 > p_y || p_y > WindowMaxY || 0 > n_z)
	{
		return;
	}
	
	if (n_z < scrdepth[p_y][p_x])
	{
		putpixel(p_x, p_y, color);
		
		scrdepth[p_y][p_x] = n_z / 10;
	}
	
	return;
}

Camera::~Camera()
{
	int i;
	for (i = 0; i < height; ++i)
	{
		delete [] screendepth[i];
	}
	
	delete [] screendepth;
};