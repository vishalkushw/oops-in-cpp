// calling base class constructer in derived class

//wap to create class Univercity having data member,
//univercity_name,address,session,number_of_streams,number_of_collage
//member function parameterized constructer  setter(),getter()
//create a child class college having attribute   data member:
//college_name,addres,number_of_student
//create a child class Student having attribute
//data member: student_name,address


#include <iostream>
using namespace std;

class Univercity{
	protected:
	string	univercity_name;
	int	number_of_collage;
	
	public: 
	Univercity(string un,int noc){
		univercity_name=un;
		number_of_collage=noc;
	}

};

  class Collage :public Univercity{
  	  protected:
  	  string collage_name;
	  int number_of_collage;
	  
	  public: 
	  Collage(string un,int noc,string CN):Univercity(un,noc){
	  	collage_name=CN;
  	  }
  };
  
  class Student :public Collage{
  	private:
  	string	student_name;
     public: 
	  Student(string un,int noc,string CN,string name):Collage(un,noc,CN){
	  	student_name=name;
     }
     void display(){
     	cout<<"university Name:"<<	univercity_name <<endl;
     	cout<<"Number of Collage :"<<number_of_collage<<endl;
     	cout<<"Collage Name:"<<	collage_name <<endl;
     	cout<<"Student  Name:"<<student_name <<endl;
	 }
  };


int main(){
	Student obj("Rgpv",20,"SAM","vishal");
	obj.display();

}
