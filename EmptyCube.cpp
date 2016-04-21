// Empty Cube.cpp
#include "EmptyCube.h"


void EmptyCube::display(Camera& camera)
{
	int x, y, z;

	x = position.x + 10;
	y = position.y + 10;
	for (z = position.z - 10; z < position.z + 10; z++)
	{
		camera.putvoxel(x, y, z, Color);
	}
	
	x = position.x - 10;
	for (z = position.z - 10; z < position.z + 10; z++)
	{
		camera.putvoxel(x, y, z, Color);
	}
	
	y = position.y - 10;
	for (z = position.z - 10; z < position.z + 10; z++)
	{
		camera.putvoxel(x, y, z, Color);
	}
	
	x = position.x + 10;
	for (z = position.z - 10; z < position.z + 10; z++)
	{
		camera.putvoxel(x, y, z, Color);
	}
	
	x = position.x + 10;
	z = position.z + 10;
	for (y = position.y - 10; y < position.y + 10; y++)
	{
		camera.putvoxel(x, y, z, Color);
	}
	
	z = position.z - 10;
	for (y = position.y - 10; y < position.y + 10; y++)
	{
		camera.putvoxel(x, y, z, Color);
	}
	
	x = position.x - 10;
	for (y = position.y - 10; y < position.y + 10; y++)
	{
		camera.putvoxel(x, y, z, Color);
	}
	
	z = position.z + 10;
	for (y = position.y - 10; y < position.y + 10; y++)
	{
		camera.putvoxel(x, y, z, Color);
	}
	
	y = position.y + 10;
	z = position.z + 10;
	for (x = position.x - 10; x < position.x + 10; x++)
	{
		camera.putvoxel(x, y, z, Color);
	}
	
	y = position.y - 10;
	for (x = position.x - 10; x < position.x + 10; x++)
	{
		camera.putvoxel(x, y, z, Color);
	}

	z = position.z - 10;
	for (x = position.x - 10; x < position.x + 10; x++)
	{
		camera.putvoxel(x, y, z, Color);
	}
	
	y = position.y + 10;
	for (x = position.x - 10; x < position.x + 10; x++)
	{
		camera.putvoxel(x, y, z, Color);
	}
}
