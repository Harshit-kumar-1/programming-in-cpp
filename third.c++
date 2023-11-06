/* program for check charecter is vowel or consonent*/
#include<iostream>
using namespace std;
int main(){
	string ch;
	cout<<"Enter a Charecter  :  "<<endl;
	cin>>ch;

	if(ch=="a" || ch=="e" || ch=="i" || ch=="o" || ch== "u"){
		cout<<ch<<" is a vowel.";
		}
	else if(ch=="A" || ch=="E" || ch=="I" || ch=="O" || ch=="U"){
		cout<<ch<<" is a vowel.";
		}
	else{
		cout<<ch<<" is a consonent.";
	}
	return 0;
	}
