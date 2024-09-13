#include <iostream>
using namespace std;

class Car{
	public:
		string name;
		string color;
		int price;
			
	void insert_data()	{
		cout<<"Enter name : ";
		cin>>name;
		cout<<"Enter color : ";
		cin>>color;
		cout<<"Enter price : ";
		cin>>price;
	}
	
	
	void display_data(){
		cout<<"Car Name: "<<name<<endl;
	   	cout<<"Car Color: "<<color<<endl;
	   	cout<<"Car Price: "<<price;
	}
};

int main(){
	Car cr;
	cr.insert_data();
	cr.display_data();	
}
