#include<iostream>
using namespace std ;

class mobile
{
	string colour;
	int storage ;
	string  model;
	public:

	mobile(){
		this->colour = "black";
		this->model =" basic";
		cout<<"\n created mobile with black colour"<<"And model:basic";
	}

	mobile( string cl){
		this->colour =cl;
		this->model = "basic";
		cout<<"\n created mobile with colour :"<<cl<<"And model :basic";
	}

	mobile(string cl, string m){
		this->colour = cl;
		this->model = m;
		cout<<"\n mobile created with colour"<<cl<<"And model"<<m;
	}

	void set_storage(int gb)
	{
		this->storage = gb;
	}

	void show_mobile_details()
	{
		cout<<"\n Mobile has following parameters :";
		cout<<"\n colour:"<<colour;
		cout<<"\n model :"<<model;
		cout<<"\n storage :"<<storage;


	}

};

int main(){

	mobile ma;
	//ma.set_storage(32);
	ma.show_mobile_details();

	mobile m4("WHITE");
	//m4.set_storage(64);
	m4.show_mobile_details();

	mobile m1("GREY","PREMIUM");
	//m1.set_storage(128);
	m1.show_mobile_details();

	return 0;



}
