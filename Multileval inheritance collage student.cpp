#include <iostream>
using namespace std ;
class Collage{
	public:
		string clg_name;
		string addres;
		
	Collage(string cn,string add){
		clg_name=cn;
		addres=add;
	}
};

class School:public Collage{
	public:
	string school_name;
	string subject;
	double fees;
		
	public:
	    School(string cn,string add,string sn,string sbj,double fs):Collage(cn,add){
	    	school_name=sn;
	    	subject=sbj;
	    	fees=fs;
		}		
	};
	
class Student: public School{
	private:
	string stu_name;
	string clas;
	int roll;
	public:
		Student(string cn,string add,string sn,string sbj,double fs,string stn,string cs,int rl)
		:School(cn,add,sn,sbj,fs){
		stu_name=stn;
	    clas=cs;
	    roll=rl;
}
	    void display(){
		cout<<"Collage name : "<<clg_name<<endl;
		cout<<"Addres : "<<addres<<endl;
		cout<<"School name : "<<school_name<<endl;
		cout<<"Subject : "<<subject<<endl;
		cout<<"Fees : "<<fees<<endl;
		cout<<"Student name : "<<stu_name<<endl;
		cout<<"class : "<<clas<<endl;
		cout<<"roll number : "<<roll;
		
		}
};
	
int main(){

Student s("SAM","Bhopal","SVM","Math",6700,"Vishal","12th",101)	;
s.display();
	
}
