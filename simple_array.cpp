//simple  array problem
#include<stdio.h>
using namespace std;
int main(){
	int array[10] , i , n;

	for( i=0 ; i< 5 ; i++){

		printf("Enter the element : ");
		scanf("%d",&array[i]);
	}
	for(i=5;i>0;i--){
		array[i]=array[i-1];
		printf("%d",array[i]);
	}
	printf("Enter position element : ");
	scanf("%d",&n);
	array[0]=n;

	for( i=0 ; i<=5 ; i++){
		printf("%d\n",array[i]);
	}
	return 0;
}
