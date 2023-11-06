#include<iostream>
using namespace std;

struct TelephoneDirectory{
		string name;
		int num;
		string localAddress;
		int pincode;
		string state;
		string country;
};

int main(){
	int i,ch,time;
	struct TelephoneDirectory person[10];
	for(i=0;i<10;i++){
			cout<<"If You want to insert Data in Telephone Directory ";
			cout<<"press 1 .\nElse You want to display Data from Telephone Directory press 0.  :  \n";
			cin>>ch;
			cout<<endl;
			if(ch!=0){
					time=i;
			cout<<"Enter Person Name : ";
			cin>>person[i].name ;
			cout<<"Enter Person Number : " ;
			cin>>person[i].num ;
			cout<<"Enter Person Local Address or City : ";
			cin>>person[i].localAddress;
			cout<<"Enter Person City Pincode : ";
			cin>>person[i].pincode;
			cout<<"Enter Person State : ";
			cin>>person[i].state;
			cout<<"Enter Person Country : ";
			cin>>person[i].country;
			cout<<endl<<endl;
			}
			else{
				break;
			}
	}
		for(i=0;i<=time;i++){
			cout<<"Person Name : "<<person[i].name<<endl;
			cout<<"Person Number : "<<person[i].num<<endl;
			cout<<"Person Local Address or City : "<<person[i].localAddress<<endl;
			cout<<"Person City Pincode : "<<person[i].pincode<<endl;
			cout<<"Person State : "<<person[i].state<<endl;
			cout<<"Person Country : "<<person[i].country<<endl<<endl<<endl<<endl;
		}
		return 0;
}//output->

















