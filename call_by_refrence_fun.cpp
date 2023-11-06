//7.	Program for call by reference.
#include<iostream>
using namespace std;
int swep(int x,int y){
		return (x+y);
}
int main(){
	int num1,num2,temp=0;
	cout<<"Enter first number : ";
	cin>>num1;
	cout<<"Enter second number : ";
	cin>>num2;
	int result=swep(num1,num2);
	cout<<"Here is addition of "<<num1<<" & "<<num2<<" is "<<result;
		return 0;
}
//Output->

