#include<iostream>
using namespace std;

class Car
{
	public:

		string name;

		int engine_cc;

		

		void display_name()
		{
			cout<<"\n ur name is\n "<< name;
		}

		void display_engine_cc()
		{
					
			cout<<"\n ur engine_cc is\n "<< engine_cc;
		}
};

int main()
{
	Car C1,C2;

	C1.name = "\n RAM \n";
	C2.name = "\n SAM \n";
	C1.engine_cc = 5000;
	C2.engine_cc = 10000;

	C1.display_name();
	C2.display_name();
	C1.display_engine_cc();
	C2.display_engine_cc();

	return 0;

}
