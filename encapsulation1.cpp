#include<iostream>
using namespace std;

class rectangle
{
	private:

	int age;

	public:

	int length;
	int width;
	

	int setlength(int len)
	{
		if (len >=0)

		length = len;

		return 0;

	}

	int setwidth(int wid)
	{
		if(wid >=0)

		width = wid;

		return 0;

	}

	rectangle(int len ,int wid)
	{
		length =len;

		width =wid;
	}

	int getarea()
	{
		return length  * width ;
	}
};

int main()
{
	rectangle rec(10,20);

	cout<<"Area ="<<rec.getarea()<<endl;
	

	return 0;

}
