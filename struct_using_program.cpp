#include<iostream>
using namespace std;

struct student{
	int rollno;
	string name;
	char blood_group[2];
};

int main(){
		int i,n;
		cout<<"Enter the size of student Record : ";
		cin>>n;
		cout<<endl;
		struct student s[n];
		for(i=0;i<n;i++){
			cout<<"Enter Student Roll_no : ";
			cin>>s[i].rollno;
			cout<<"Enter Student Name : ";
			cin>>s[i].name;
			cout<<"Enter Blood group of the student : ";
			cin>>s[i].blood_group;
			cout<<endl;
		}
		for(i=0;i<n;i++){
			cout<<"The Student Roll Number is : "<<s[i].rollno<<endl;
			cout<<"The Student Name is        :"<<s[i].name<<endl;
			cout<<"The Student Blood Group is : "<<s[i].blood_group<<endl<<endl<<endl;
		}
return 0;
}
//output->








