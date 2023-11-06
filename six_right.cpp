#include <iostream>
using namespace std;
// Argument Without return value.

int swep(int a, int b){
	cout<< " After the sweping "<<a,b<<endl;
	a=a+b;
	b=a-b;
	a=a-b;
	cout<< " Before the sweping "<<a,b;
	return 0;
}

int main(){
	int a=10,b=20;
	int swep(a,b);
	return 0;
}
