#include<iostream>
using namespace std;
//declaration of a class
class student{
	//three type 1->private (it is default to use member is private ) 2->public (we access member globally)  3->protected (some time we access member sometime no.)
	public:
		//here we declare member of classes.
	string name;
	int age;
};

int main(){
	//here s1 is object of the class;
	student s1;
	//here we give value for a object like name or age.
	cout<<"Enter the name of student : ";
	cin>>s1.name;
	cout<<"Enter the name of student : ";
	cin>>s1.age;
	//print student class object s1 name & age.
	cout<<"student name is : "<<s1.name<<" & age is : "<<s1.age;
}
