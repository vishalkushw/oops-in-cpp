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
	cout<<"Enter First number : ";
	cin>>a;
	cout<<"Enter Second Number : ";
	cin>>b;
	Solution obj;
	cout<<"Addition two number is : "<< obj.add(a,b);	
}
