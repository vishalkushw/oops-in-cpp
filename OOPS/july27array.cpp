/*
#include <iostream>
using namespace std;
void increment_10(int arr[],int size){
		for(int i=0;i<size;i++){
		arr[i]=arr[i]+10;
	}
	}
int main(){
	int arr[]={34,5,14,22,8};
	int size= sizeof(arr)/sizeof(arr[0]);
	for(int i=0;i<size;i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl;
	increment_10(arr,size); //we actualy pass base address./(behave as callby reference)
	for(int i=0;i<size;i++){//size passing behave as behave as call by value
		cout<<arr[i]<<" ";
	}
	
}
*/
//write a program incement all the elemnt of array increment by 10
#include <iostream>
using namespace std;
void increment_10(int arr[],int size){
	
	    int *p=arr;
		for(int i=0;i<size;i++){
		arr[i]=p[i]+10;
	}
	}
int main(){
	int arr[]={34,5,14,22,8};
	int size= sizeof(arr)/sizeof(arr[0]);
	for(int i=0;i<size;i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl;
	increment_10(arr,size); 
	for(int i=0;i<size;i++){
		cout<<arr[i]<<" ";
	}
	
}
