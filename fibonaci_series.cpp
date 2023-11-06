#include<iostream>
using namespace std;

int main(){
	int num1=0,num2=1,num3,temp,i=0;
	cout<< "Enter the Term UP to for Fibonacci Series : ";
	cin>> num3;
	temp=num3;
	cout<<num1<<" "<<num2<<" ";
	while(i!=temp-2){
		num3=num1+num2;
		cout<< num3<<" ";
		num1=num2;
		num2=num3;
		i++;
	}
	return 0;
}
//Output->
