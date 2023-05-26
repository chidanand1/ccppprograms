#include<iostream>
using namespace std;

class Car
{
	string color;
	string model;
	int engine_cc;
	public:
	Car(){
		this->color ="White";
		this->model ="Basic";
		cout<<"\n Created car with white color"<<"And model :Basic";
	}
	Car(string cl){
		this-> color =cl;
		this-> model="Basic";
		cout<<"\n car created with White color :"<<cl<<" And model :Basic";
	}
	Car(string cl, string m ){
		this->color=cl;
		this->color=m;
		cout<<"\n created car with color :"<<cl<<"And model:"<<m;
	}

	void set_engine_cc(int cc)
	{
		this->engine_cc = cc;
	}
	void show_car_details()
	{
		cout<<"\n Car has following parameters :";
		cout<<"\n Color :"<<color;
		cout<<"\n Model :"<<model;
		cout<<"\n engine_cc"<<engine_cc;
	}
};

int main()
{
	Car ca;
	//ca.set_engine_cc(200);
	ca.show_car_details();

	Car c4("RED");
	//c4.set_engine_cc(600);
	c4.show_car_details();

	Car o1("ORANGE","PREMINUM");
	//o1.set_engine_cc(1000);
	o1.show_car_details();


	return 0;
}
