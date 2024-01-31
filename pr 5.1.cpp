/*
You Are Failed
1. WAP to create a class which illustrate the concept of handling all types of exceptions using general exception.

*/

#include<iostream>
using namespace std;

class Exceptions{
	public :
	int a;
	int b;
	int c;
	int age;
	void error(){
		try{
			if(b==0){
				throw 43;
			}else{
				c=a/b;
				cout<<c<<endl;
			}
			if(age<18){
				throw 43;
			}else{
				age<18;
				cout<<age<<endl;
			}
		}
		catch(...){
		cout<<"You Are Failed"<<endl;
	}
	}
	};
int main(){
	Exceptions e1;
	
	e1.error();
	
	return 0;
}
