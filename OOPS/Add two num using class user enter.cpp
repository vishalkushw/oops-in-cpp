#include <iostream>
using namespace std;

class Solution{
	public:
		int add(int a,int b){
			return a+b;
		}
	
};
int main(){
	int a,b;
	cout<<"Enter First Number : ";
	cin>>a;
	cout<<"Enter Second Number : ";
	cin>>b;
	Solution obj;
	cout<<"Addition two Number is : "<< obj.add(a,b);	
}
