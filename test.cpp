#include <iostream>

void otherprint()
{
	std::cout << "This is function pointer test!" << std::endl;
}

class test
{
private:
	int x;
	int y;
	uint16_t ** c;
public:
	test(int x, int y);
	
	void print()
	{
		std::cout << x << " " << y << std::endl;
		int i;
		for (i = 0; i < 10; ++i)
		{
			int j;
			for (j = 0; j < 10; ++j)
			{
				std::cout << c[i][j] << ' ';
			}
		}
	};
	
	void getfunction(void (*foo)(void))
	{
		foo();
	}
	
	~test()
	{
		int i;
		for (i = 0; i < 10; ++i)
		{
			delete [] c[i];
		}
		
		delete [] c;
	}
	
	int& get()
	{
		std::cout << &x << std::endl;
		
		return x;
	}
};

test::test(int x, int y) : x(x), y(y)
{
	c = new uint16_t* [10];
	
	int i, j;
	for (i = 0; i < 10; ++i)
	{
		c[i] = new uint16_t [10];
	}
	
	for (i = 0; i < 10; ++i)
	{
		for (j = 0; j < 10; ++j)
		{
			c[i][j] = 255;
		}
	}
};

int main()
{
	test test1(1, 2);
	test1.print();
	test1.getfunction(otherprint);
	
	std::cout << &( test1.get() ) << std::endl;
	
	return 0;
}