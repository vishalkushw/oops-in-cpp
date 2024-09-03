#include<iostream>
using namespace std;
class Car{
	public:
		string car_name;
		string modal;
		int price;
	
	public:
		Car(string cn,string modl,int pric){
			car_name=cn;
		    modal=modl;
		    price=pric;
		}
};

int main(){
	Car cr("Safari","tata",5000000);

	cout<<cr.car_name<<endl;
	cout<<cr.modal<<endl;
	cout<<cr.price;	
}
