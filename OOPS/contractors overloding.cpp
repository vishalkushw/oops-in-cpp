// contractors overloding :-if a class havine more than one contructor

#include <iostream>
using namespace std;
class login {
	int code =1001;
	int pwd=2001;
	
	public:login(){
		cout<<"vishal \n";      
	}
	public:login(int c,int p)
	{
		if(c==code && p==pwd){
			cout<<"welcome Vishal\n";
		}  
		else{
			cout<<"Incorect password";
		}
	}
};
int main(){
	int code ;
	int pwd;
	cout<<"Enter code \n";
	cin>>code;
	cout<<"Enter password\n";
	cin>>pwd;
	
	login j;
	login object(code ,pwd);
	
}


