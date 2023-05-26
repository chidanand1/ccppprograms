#include<iostream>

using namespace std;

class employee{

	private:
	//private attribute
	int salary;

	public:
	//setter
	void setsalary(int s)
	{
		salary = s;

	}
	// Getter
	int getsalary()
	{
		return salary;
	}
};

int main()
{
	employee myObj;
	myObj.setsalary(50000);
	cout<<myObj.getsalary();

	return 0;
}
