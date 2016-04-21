#include <winbgim.h>
#include <conio.h>
#include <stdio.h>
#include <iostream>
#include <string.h>

#include "Engine.h"
#include "Object.h"

int main(int argc, char** argv)
{
	initwindow(WindowMaxX, WindowMaxY);

	engine Engine;
	Engine.initlist();
	
	char command[30];
	char n;
	
	do
	{
		n = getch();
	
		if ((int) n == 27) break;
		else if ((int) n == 13) Engine.addobject();
		else if (n == 'e') Engine.moveup();
		else if (n == 'd') Engine.movedown();
		else if (n == 's') Engine.moveleft();
		else if (n == 'f') Engine.moveright();
		else if (n == 'i') Engine.movebehind();
		else if (n == 'k') Engine.movefront();
		else if (n == 'r') Engine.deleteobject();
		else if ((int) n == 75) Engine.rotateleft();	// Key Left
		else if ((int) n == 77) Engine.rotateright();	// Key Right
		else if ((int) n == 72) Engine.rotateup();		// Key Up
		else if ((int) n == 80) Engine.rotatedown();	// Key Down
		else if (n == 'c')
		{
			cout << "\nCommand:";
			fflush(stdin);
			cin.getline(command, 30);
			
			if (strcmp(command, "Set background color") == 0) Engine.setbackgroundcolor();
			else if (strcmp(command, "Set object color") == 0) Engine.setobjectcolor();
			else if (strcmp(command, "Set object type") == 0) Engine.setobjecttype();
			else
			{
				cout << "Wrong command line!";
			}
			
			fflush(stdin);
		}
	} while (1);
	
	Engine.deleteall();
	
	getch();
	closegraph();
	
	return 0;
}