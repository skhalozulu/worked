#include <iostream>

using namespace std;

class Square
{
private:
	int a;
	int b;
public:
	Square()
	{

	}
	Square(int x, int y)
	{
		a = x;
		b = y;

	}
};


class Rectangle{
	friend class Square;
public :
	void convert()
	{
	
	}
};
