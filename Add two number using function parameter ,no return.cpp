// parameter, no return   
#include<iostream>
using namespace std;

void add(int a,int b){
	cout<<"Sum of two number is : " <<a+b;
}

int main(){
	int num1, num2;
	cout<<"Enter first number : ";
	cin>>num1;
	cout<<"Enter second number : ";
	cin>>num2;
	add(num1,num2);

}
