//Program for factorial using while loop
#include<iostream>
using namespace std;

int main(){
	int num,multi=1,i=1;
	cout<<"Enter number for factorial : ";
	cin>> num;

	while(i < num+1){
		multi = i * multi;
		i++;
	}
	cout<<"The factorial of "<<num<<" is "<<multi;
	return 0;
}
//Output->
