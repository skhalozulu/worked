/* #include <iostream>
using namespace std;

class Parameters
{
private:
	int length;
	int breath;
	int height;
	int volume;
public:
	Parameters()
	{

	}
	Parameters(int x, int y, int z)
	{
		length = x;
		breath = y;
		height = z;
	}
	int getvolume()
	{
		return volume;
	}
	friend Parameters area(Parameters&);

};

Parameters area(Parameters& tt)
{
	Parameters bb;
	tt.volume = tt.breath*tt.height*tt.height;
	return bb;
}

int main()
{
	Parameters ll(3, 3, 3);
	area(ll);
	cout << "The volume is :  " << ll.getvolume() << endl;
}
*/