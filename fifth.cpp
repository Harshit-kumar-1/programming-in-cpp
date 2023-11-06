//program for illustrate the Break & Continue keywords.
#include<iostream>
using namespace std;
int main(){
	int age;
	cout<<"Enter your age : ";
	cin>>age;
	if(age<=5){
		cout<< "You are a child";

	}
	else if(age<=15){
		cout<<"You are a Higher Secondary Student.";
		break;
	}
	else if(age=18){
		cout<<"Congrats ! you are eligible for Voteing ";
		continue;
		cout<<"You are a Collage Student or a drop - out  student.";
	}
	else if(age>18 && age<30){
		cout<<"You are a adult person.";
		continue;
		cout<<"You have a wife ."
	}
	else if(age>100){
		cout<<"Congrats ! You are a older man."
		break;
	}
}
