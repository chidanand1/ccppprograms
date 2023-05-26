#include<iostream>
using namespace std;

//base class
class vehicle{
	public:
		string brand = "GTA" ;

		void honk(){
			cout<<"my fav car! \n";
		}
};

// derived class

class Car: public vehicle{

	public:
		string model = "Supra";
};

int main(){
	Car myCar;

	myCar.honk();

	cout<<myCar.brand+" "+myCar.model;

	return 0;
}
