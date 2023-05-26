#include<iostream>
using namespace std;
class Account{
	float credit_card = 444444;
	public:
		float salary = 900000;
		float account_no =12345;
};

class Programmer: public Account{
	public:
		float bonus =33455;
};

int main(void){
	Programmer p1;
	cout<<"salary ="<<p1.salary<<endl;
	cout<<"bonus ="<<p1.bonus<<endl;
	cout<<"Account no ="<<p1.account_no<<endl;

	return 0;
}
