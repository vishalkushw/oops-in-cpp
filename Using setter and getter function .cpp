//5)Write a C++ program to define a class named Car.
//protected member: company, model, and year
//constructor: initialized values (parameterized)
//public member functions:getter(),setter()

#include <iostream>
using namespace std;

class Car{
	protected :
		string company, model ;
		int year;
		
	public:
		Car (string c,string m,int y){
			company=c;
			model=m;
			year=y;
		}
		
	 void getter(){
	 	cout<<"company : "<<company<<endl;
	 	cout<<"model :  "<<model<<endl;
	 	cout<<"year : "<<year<<endl;
	 	
	 }	
	 
	void setter(string c,string m ,int y){
		company=c;
		model=m;
		year=y;
		
	} 
};
int main(){
	Car c("TaTA" ,"Thar",2020);
	c.getter();
	cout<<endl;
	
	cout<<"Change Value "<<endl;
	c.setter("Honda","Baleno",2024);
	c.getter();	
}
