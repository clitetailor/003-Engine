#ifndef _H_OBJECT
#define _H_OBJECT

class Position
{
public:
	int x, y, z;
		
	Position(int n_x, int n_y, int n_z);
};

class Object
{
public:
	Position position;
	int color;
		
	virtual void display(Camera& camera) = 0;
};

#endif