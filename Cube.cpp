// Cube.cpp
#include "Cube.h"


void Cube::display(Camera& camera)
{		
	int x, y, z;

	x = position.x - 10;
	for (y = position.y - 10; y < position.y + 10; y++)
	{
		for (z = position.z - 10; z < position.z + 10; z++)
		{
			camera.putvoxel(x, y, z, Color + RGB(10, 10, 10));
		}
	}
	
	x = position.x - 10;
	for (y = position.y - 10; y < position.y + 10; y++)
	{
		for (z = position.z - 10; z < position.z + 10; z++)
		{
			camera.putvoxel(x, y, z, Color + RGB(10, 10, 10));
		}
	}

	y = position.y - 10;
	for (x = position.x - 10; x < position.x + 10; x++)
	{
		for (z = position.z - 10; z < position.z + 10; z++)
		{
			camera.putvoxel(x, y, z, Color + RGB(5, 5, 5));
		}
	}
	
	y = position.y + 10;
	for (x = position.x - 10; x < position.x + 10; x++)
	{
		for (z = position.z - 10; z < position.z + 10; z++)
		{
			camera.putvoxel(x, y, z, Color + RGB(5, 5, 5));
		}
	}
	
	z = position.z - 10;
	for (x = position.x - 10; x < position.x + 10; x++)
	{
		for (y = position.y - 10; y < position.y + 10; y++)
		{
			camera.putvoxel(x, y, z, Color);
		}
	}
	
	z = position.z + 10;
	for (x = position.x - 10; x < position.x + 10; x++)
	{
		for (y = position.y - 10; y < position.y + 10; y++)
		{
			camera.putvoxel(x, y, z, Color);
		}
	}
};
