#include <iostream>
using namespace std;

class A{
public:
	A(){
	cout<<"This is class A"<<endl;
	}
};
class C{
public:
	C(){
	cout<<"This is class C"<<endl;
	}
};
class B : public A , public C{
public:
	B(){
	cout<<"This is class B"<<endl;
	}
};
class F : public B{
public:
	F(){
	cout<<"This is class F"<<endl;
	}
};
class E : public F{
public:
	E(){
	cout<<"This is class E"<<endl;
	}
};
class G : public E{
public:
	G(){
	cout<<"This is class G"<<endl;
	}
};

main(){
	G obj;
	return 0;
}
