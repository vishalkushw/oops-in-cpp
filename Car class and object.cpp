#include<iostream>
using namespace std;
class Car{
	private:
		string car_name;
		string modal;
		int price;
	
	public:
		Car(string cn,string modl,int pric){
			car_name=cn;
		    modal=modl;
		    price=pric;
		}
		
		void diplay(){
			cout<<"Car name : "<<car_name<<endl;
			cout<<"Modal : "<<modal<<endl;
			cout<<"Price : "<<price;
		}
};

int main(){
	Car cr("Safari","Tata 2030",5000000);
	cr.diplay();
}
