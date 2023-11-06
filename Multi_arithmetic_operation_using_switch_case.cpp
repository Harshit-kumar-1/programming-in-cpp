#include <iostream>
#include <math.h>
using namespace std;

int main() {
		int num1,num2,choice=0;
	while(choice!=7){
	cout<<" press 1 for add\n press 2 for sub\n press 3 for product\n";
	cout<<" press 4 for divide\n press 5 for modules\n press 6 for power.\n press 7 for terminate program.";
	cout<<"\nEnter your choice : ";
	cin>>choice;
	switch(choice){
		case 1:
			cout<<"Enter the first number : ";
			cin>> num1;
			cout<<"Enter the second number : ";
			cin>> num2;
			cout<<"The addition of "<<num1<<" and "<<num2<<" is "<<num1+num2;
			break;
		case 2:
			cout<<"Enter the first number : ";
			cin>> num1;
			cout<<"Enter the second number : ";
			cin>> num2;
			cout<<"The subtraction of "<<num1<<" and "<<num2<<" is "<<num1-num2;
			break;
		case 3:
			cout<<"Enter the first number : ";
			cin>> num1;
			cout<<"Enter the second number : ";
			cin>> num2;
			cout<<"The Product of "<<num1<<" and "<<num2<<" is "<<num1*num2;
			break;
		case 4:
			cout<<"Enter the first number : ";
			cin>> num1;
			cout<<"Enter the second number : ";
			cin>> num2;
			cout<<"The Division of "<<num1<<" and "<<num2<<" is "<<num1/num2;
			break;
		case 5:
			cout<<"Enter the first number : ";
			cin>> num1;
			cout<<"Enter the second number : ";
			cin>> num2;
			cout<<"The Modules of "<<num1<<" and "<<num2<<" is "<<num1%num2;
			break;
		case 6:
			int result;
			cout<<"Enter the first number : ";
			cin>> num1;
			cout<<"Enter the second number : ";
			cin>> num2;
			result=pow (num1,num2);
			cout<<"The Power of "<<num1<<" and "<<num2<<" is "<<result;
			break;
		case 7:
			choice=7;
			break;
		default:
			cout<<"You Enter wrong choice.";
	}
	cout<<endl;
}
	return 0;
}
//output->
