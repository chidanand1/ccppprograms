#include<iostream>
using namespace std;

class animal{

	public:
		void animalsound()
		{
			cout<<"The animal make sound \n";
		}	
};
class dog: public animal {
	public:
		void animalsound()
		{
			cout<<"the dog says :bow !bow !";
		}
};
class pig: public animal{
	public:
		void animalsound()
		{
			cout<<"the pig says :wep ! wep !";
		}
};

int main(){

	animal myanimal;
	pig mypig;
	dog mydog;

	myanimal.animalsound();
	mydog.animalsound();
	mypig.animalsound();

	return 0;
}
