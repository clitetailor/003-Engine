// Sphere
#include "Sphere.h"

void Sphere::display(Camera& camera)
{
	float delta = atan2(1, radius);
	for (float phi = 0; phi < 2 * M_PI; phi += delta)
	{
		for (float theta = 0; theta < 2 * M_PI; theta += delta)
		{
			camera.putvoxel(radius * cos(phi) * sin(theta), radius * sin(phi) * sin(theta), radius * cos(theta), Color);
		}
	}
}