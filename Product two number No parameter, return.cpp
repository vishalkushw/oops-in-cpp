// No parameter, return

#include<iostream>
using namespace std;

int add(){
	int num1, num2;
	cout<<"Enter first number : ";
	cin>>num1;
	cout<<"Enter second number : ";
	cin>>num2;
	return num1*num2;
}

int main(){

	
	int product=add();
	cout<<"Product of two number is : "<<product;
}
