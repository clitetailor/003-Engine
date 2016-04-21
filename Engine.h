#ifndef _H_ENGINE
#define _H_ENGINE

#include <iostream>
#include "Object.h"
#include "Stack.h"

using namespace std;

class Engine
{
private:
	Camera camera;
	EmptyCube pointer;
	
	Stack stack;
	
	void display();
public:
	Engine() {};
	~Engine() {};
	
	void InitEnv();
	void Add();
	void Delete();
	void SetBgColor();
	void SetObjectColor();
	void SetObjectType();
	void Left();
	void Right();
	void Up();
	void Down();
	void Forward();
	void Backward();
};

#endif