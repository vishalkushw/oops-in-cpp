//operator overloading 

#include<iostream>
using namespace std;

class Operators{
    private:
     int marks;
     
    public:
     Operators(int num){
     marks = num;
   }
   
  Operators operator +(Operators obj){
    Operators temp(0);
    temp.marks=marks+obj.marks;
    return temp;
  }
  
  void display(){
    cout<<marks;

  }
};

int main(){
Operators s1(21),s2(53),s3(31);
Operators result=s1+s2+s3;
result.display();
}
