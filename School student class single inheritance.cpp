#include <iostream>
using namespace std ;

class School{
	public:
		string school_name;
		string subject;
		double fees;
		
	public:
	    School(string sn,string sbj,double fs){
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
		Student(string sn,string sbj,double fs,string stn,string cs,int rl)
		:School(sn,sbj,fs){
		stu_name=stn;
	    clas=cs;
	    roll=rl;
}
	    void display(){
	
		cout<<"School name : "<<school_name<<endl;
		cout<<"Subject : "<<subject<<endl;
		cout<<"Fees : "<<fees<<endl;
		cout<<"Student name : "<<stu_name<<endl;
		cout<<"class : "<<clas<<endl;
		cout<<"roll number : "<<roll;
		
		}

};
	
int main(){

Student s("SVM","Math",6700,"Vishal","12th",101)	;
s.display();
	
}
