/*Type of class there are mny type of classes 
1) single clsss  - if a prog having one class is called single class
2) annomus class - a clss which does not having own name is called annomus class 
   in annomus class we have to create  object while we creating it 
3) multi class  - if a program having more than one classes  called multipule classes.
and we have to create multipule objects
4) composite class- composite  class contain the object of privious class contain.
*/

// annomus class 
//#include <iostream>
//using namespace std;
//
//class{
//	int a ,b;
//	public:sum(int x,int b){
//		cout<<x+b;
//	}
//}object;
//
//int main(){
//	object.sum(12,34);
//}

// multipule class 
//#include <iostream>
//using namespace std;
//
//class top1{
//	public:void show()
//	{
//		cout<<"top1 class show\n";
//	}
//	
//};
//
//class top2{
//	public:void display(){
//		cout<<"top2 display class\n";
//	}
//	
//};
//
//
//int main(){
//	top1 t1;
//	t1.show();
//	top2 t2;
//	t2.display();
//}

// composite class 
#include <iostream>
using namespace std;

class hacker{
	public:void virus()
	{
		cout<<"your system got hacked\n";
	}
	
};

class user{
	hacker h;
	public:void reward(){
		cout<<"you won rs 2000000 in lottery system\n";
		h.virus();
	}
	
};


int main(){
	user crust;
	crust.reward();
}

