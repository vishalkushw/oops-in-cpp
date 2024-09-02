// parameter, return

#include<iostream>
using namespace std;

int add(int a,int b){
	return a-b;
}

int main(){
	int num1, num2;
	cout<<"Enter first number : ";
	cin>>num1;
	cout<<"Enter second number : ";
	cin>>num2;
	
	int sub=add(num1,num2);
	cout<<"Subtract of num1 - num2 is : "<<sub;
}
