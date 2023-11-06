//11.	Program to find greatest among three numbers using nested if.
#include<iostream>
using namespace std;
int main(){
	int num1,num2,num3;
	cout<<"Enter first number : ";
	cin>>num1;
	cout<<"Enter second number : ";
	cin>>num2;
	cout<<"Enter third number : ";
	cin>>num3;
	if(num1>num2){
		if(num1>num3){
				cout<<num1<<" Greater than "<<num2<<" & "<<num3;
		}
		else{
			cout<<num3<<" Greater than "<<num1<<" & "<<num2;
		}
	}
	else if(num2>num1){
		if(num2>num3){
				cout<<num2<<" Greater than "<<num1<<" & "<<num3;
		}
		else{
			cout<<num3<<" Greater than "<<num1<<" & "<<num2;
		}
	}
	else{
		cout<<num3<<" Greater than "<<num1<<" & "<<num2;
	}
return 0;
}
