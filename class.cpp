#include<iostream>
using namespace std;
/*
class a{
	public://it specific identifier hai jo hame batata hai ki yah function class publicly access ho sakti hai.
	int a=0;
	void add(){
	cout<<a;
	}
};

int main(){
	a obj;
	obj.add();
	return 0;

}
*/

/*
class a{
public:
	int f(){
	int a=12;
	cout<<a;
	}
};
class b{
friend int a::f();
};

int main(){

}
*/

class A{
friend class B;
int a;
};
class B{
	friend class C;
};
class C : public B{
void f(A*  Obj){
Obj->a=2;//class E is not a friend class of C;//friendship is not transitive;//
}
};

int main(){
//A Obj;
}

class x{

};
