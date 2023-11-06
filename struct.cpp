#include<iostream>
using namespace std;
int main(){
	struct person{
		string name;
		int age;
		int salary;
}p1,p2,p3;

	cout<<"Enter person name : ";
	cin>>p1.name;
	cout<<"Enter person age : ";
	cin>>p1.age;
	cout<<"Enter person salary : ";
	cin>>p1.salary;
	cout<<"Enter person2 name : ";
	cin>>p2.name;
	cout<<"Enter person2 age : ";
	cin>>p2.age;
	cout<<"Enter person2 salary : ";
	cin>>p2.salary;
	cout<<p1.name<<" "<<p1.age<<" "<<p1.salary<<endl;
	cout<<p2.name<<" "<<p2.age<<" "<<p2.salary;
	return 0;
}
