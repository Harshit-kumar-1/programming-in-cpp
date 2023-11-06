//This program demonstrate multi-level inheritances.
#include<iostream>
using namespace std;

class A {
public:
	A(){
		cout<<"This is class A "<<endl;
	}
};
class B : public A{
public:
	B(){
		cout<<"This is class B"<<endl;
	}
};
class C : public B{
public:
	int id_c;
	C(){
		cout<<"This is class C";
	}
};

main(){
	C obj;
	return 0;
}
