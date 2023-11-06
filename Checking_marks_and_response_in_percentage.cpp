//program for check grade checking by his/her marks.
#include<iostream>
using namespace std;
int main(){
	int marks;
	cout<< "Enter Your marks any subject : ";
	cin>>marks;
	if(marks>100){
		cout<<"Invalid Marks ! please re-enter marks. ";
	}
	else if(marks>=90){
		cout<<"Congrats ! You achieve A+ grade.";
	}
	else if(marks>=80){
		cout<<"Congrats ! You achieve A grade.";
	}
	else if(marks>=70){
		cout<<"Congrats ! You achieve B+ grade.";}
	else if(marks>=60){
		cout<<"Congrats ! You achieve B grade.";
	}
	else if(marks>=50){
		cout<<"Congrats ! You achieve C+ grade.Don't be discouraged try better next time.";}
	else if(marks>=40){
		cout<<"Congrats ! You achieve C grade.Don't be discouraged try better next time.";}
	else if(marks>=33){
		cout<<"Congrats ! You achieve D grade. Don't be discouraged try better next time.";
	}
	else{
		cout<<"Sorrrrry But You have Failed Don't worry try better next time.";}
		}
