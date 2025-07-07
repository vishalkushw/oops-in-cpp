
#include<iostream>
using namespace std;

class Bank{
    private:
       string name;
	   string type_of_account;
       int account_number,password,balance;

    public:
        Bank(string nm,int ac,string ty,int bal,int pass){
        name=nm;
        account_number=ac;
        type_of_account=ty;
        balance=bal;
        password=pass;
}

void deposit(int amount,int pass){
    if(password==pass){
        balance=balance+amount;
    }
    else{
        cout<<"wrong password"<<endl;
    }
}
void withdraw(int amount,int pass){
    if(password==pass){
        balance =balance-amount;
    }
}

void display(){
    cout<<"Name "<<name<<endl;
    cout<<"Balance "<<balance<<endl;
}
};
int main(){
    Bank obj1("Vishal",786761,"saving",2400,432);
    obj1.display();
    obj1.deposit(4000,432);
    obj1.display();
    obj1.withdraw(500,438);
    obj1.display();
    
}
