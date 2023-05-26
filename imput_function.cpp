#include<iostream>
using namespace std;

class Car
{
	public:

	string name;

	int engine_cc;

	void get_name()
	{
		cout<<"\n enter ur name :-";
		cin>>name;
		cout<<"\n ur name is "<<name;
	}
	void get_engine_cc()
	{
		cout<<"\n\n enter the power of the engine:- ";
		cin>>engine_cc;
		cout<<"\n the power of engine_cc is "<<engine_cc;

	}
};

int main()
{
	Car C1,C2;
	
	C1.get_name();
	C2.get_engine_cc();

	return 0;
}
