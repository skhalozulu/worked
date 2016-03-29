/* #include <iostream>
#include <string>
using namespace std;

class Mthunzi{

private:
	string girlfriend;
public:
	Mthunzi()

	{

	}
	Mthunzi(string n)
	{
		girlfriend = n;
	}
	string getgirlfriend() const
	{
		return girlfriend;
	}
	friend Mthunzi ngcebo(Mthunzi&);
};

Mthunzi ngcebo(Mthunzi& bb)
{
	Mthunzi aa;
	cout << "Your girlfriend is  "<< bb.girlfriend<<endl;
	return aa;
}
int main()
{
	Mthunzi ss("Ntombi");
	ngcebo(ss);

} */