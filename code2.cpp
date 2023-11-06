//2.	Program to swapping two variables using third variable.
#include<iostream>
using namespace std;
int main(){
	int num1,num2,temp=0;
	cout<<"Enter first number : ";
	cin>>num1;
	cout<<"Enter second number : ";
	cin>>num2;
	cout<<"Before sweping "<<endl<<"Number 1 = "<<num1<<endl<<"Number 2 = "<<num2<<endl;;
	temp=num2;
	num2=num1;
	num1=temp;
	cout<<"After sweping "<<endl<<"Number 1 = "<<num1<<endl<<"Number 2 = "<<num2<<endl;;
		return 0;
}
