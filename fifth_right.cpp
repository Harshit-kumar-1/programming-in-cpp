//program for illustrate the Break & Continue keywords.
#include<iostream>
using namespace std;
int main(){
	int i , num;
	cout << "Enter number between 1-20  :  ";
	cin>>num;
	if(num<=20){
	for(i=1; i<=20 ; i++){
			if(i==10){
					break;
			}
			else if(i%2==0 ){
				continue;
			}
			else{
				cout<< i <<endl;
			}
	}
	}
	else{
		cout<<"Invalid number ! try again.";  }
	}
//output----->
