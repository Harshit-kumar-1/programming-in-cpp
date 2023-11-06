//6.	Program to implement call by value.
#include<iostream>
using namespace std;
int swep(int x,int y){
		int temp=0;
				temp=y;
				y=x;
				x=temp;
	cout<<"After Sweping "<<endl<<"Number 1 = "<<x<<endl<<"Number 2 = "<<y<<endl;
}
int main(){
	int num1,num2,temp=0;
	cout<<"Enter first number : ";
	cin>>num1;
	cout<<"Enter second number : ";
	cin>>num2;
	cout<<"Before sweping "<<endl<<"Number 1 = "<<num1<<endl<<"Number 2 = "<<num2<<endl;
	swep(num1,num2);
		return 0;
}
//Output->
