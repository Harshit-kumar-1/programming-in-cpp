//print half pyramid.
#include<iostream>
using namespace std;
int main(){
	int i,rows,j;
	cout<<"Enter the number of rows : " ;
	cin>> rows;
	for(i=0; i<rows; i++){
			//cout<<"h";
			for(j=0; j<=i ;j++){
				cout<<j+1;
			}
	cout<<endl;
	}
}
