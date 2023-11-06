/*sweping two number using thierd variable.*/
#include<iostream>
using namespace std;
int main(){

int a, b, c=0;
cout<<"Enter first number  ";
cin>>a;
cout<<"Enter second number " ;
cin>>b;
c=a;
a=b;
b=c;
cout<<"The swep number is "<<a<<" & "<<b;
return 0;
}
