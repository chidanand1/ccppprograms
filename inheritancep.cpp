#include <iostream>

using namespace std;

class base
{

	int x = 1;

	protected:

	int y = 2;

	public:

	int z = 3;

	int getx() {
		return x;
	}
};

class derived: public base
{
	public:
	int gety()
		{
			return y;
		}

};

int main()
{
	derived d;

	cout << "private int x =" << d.getx() << endl;
	
	cout << "proctected int y =" << d.gety() << endl;

	cout << "public int z =" << d.z << endl;

	return 0;
}
