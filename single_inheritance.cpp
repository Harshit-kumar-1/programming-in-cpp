//This program is demonstrate a single level inheritance.
#include<iostream>
using namespace std;

class A{
public:
	A( ){
		cout<<"This is class A\n";
	}
};
class B: public A{
public:
	B( ){
		cout<<"This is class B\n";
	}
};
main(){
	B obj;
	return 0;
}
