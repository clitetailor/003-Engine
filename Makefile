all:
	g++ -o main.exe Main.cpp Camera.cpp Cube.cpp "Empty Cube.cpp" Engine.cpp Object.cpp Sphere.cpp Triangle.cpp -lbgi -lgdi32 -lcomdlg32 -luuid -loleaut32 -lole32
	
test:
	g++ -o test.exe test.cpp