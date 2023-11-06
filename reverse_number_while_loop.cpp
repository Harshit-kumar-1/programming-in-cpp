//Program for reverse number using while loop
#include<iostream>
using namespace std;

int main(){
	int num,i=0,temp=0;
	cout<< "Enter the number : ";
	cin>>num;

	while(num!=0){
		i = num%10;
		temp = temp*10+i;
		num = num/10;
	}
	cout << "Reversed number of is "<<temp;
	return 0;
}
//Output->
