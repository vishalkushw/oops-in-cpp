//#include <iostream>
//using namespace std;
//static int a;            //by default it enasilize 0 zero
//void show (){
//	   a++;
//	   cout<<a <<"\t";
//	}
//
//
//int main(){
//	show();
//	show();
//	show();
//}

// 1   2  3


//#include <iostream>
//using namespace std;
//class cybrom{
//   static int a;      
//   public:void show (){
//	   a++;
//	   cout<<a <<"\t";
//	}
//};
//int cybrom::a;  //it is a enasilize to class
//
//int main(){
//  cybrom c;
//  c.show();
//  c.show();
//}


#include <iostream>
using namespace std;
class cybrom{
   static int a;      
   public:static void show (){
	   cout<<a <<"\t";
	}
};
int cybrom::a=10; 

int main(){
  cybrom ::show();
 
}


