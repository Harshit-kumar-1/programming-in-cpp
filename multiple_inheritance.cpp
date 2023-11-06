//This program demonstrate multiple inheritances.
#include<iostream>
using namespace std;

class C{
public:
	C(){
		cout<<"This is C class"<<endl;
	}
};
class B{
public:
	B(){
		cout<<"This is B class"<<endl;
	}
};
class A : public C, public B{
public:
	A(){
		cout<<"This is A class";
	}
};

main(){
	A obj;
return 0;
}
