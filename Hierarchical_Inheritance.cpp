#include<iostream>
using namespace std;

class A{
public:
	A(){
	cout<<"This is class A"<<endl;
	}
};
class B{
public:
	B(){
	cout<<"This is class B"<<endl;
	}
};
class C : public A , public B{
public:
	C(){
	cout<<"This is class C"<<endl;
	}
};
class D{
public:
	D(){
	cout<<"This is class D"<<endl;
	}
};
class E{
public:
	E(){
	cout<<"This is class E"<<endl;
	}
};
class F : public D , public E{
public:
	F(){
	cout<<"This is class F"<<endl;
	}
};
class G : public C , public F{
public:
	G(){
	cout<<"This is class G"<<endl;
	}
};
main(){
	G obj;
return 0;
}
