//Function Overloading 

#include <iostream>
using namespace std;

void add(int n1,int n2){
    cout<<n1+n2<<endl;
}
void add(int n1,double n2){
    cout<<n1+n2<<endl;
}
void add(int n1,int n2,int n3,double n4){
    cout<<n1+n2+n3+n4<<endl;
}

int main(){
 add(2,3);
 add(2,3.3);
 add(2,3,5,6.5);
}
