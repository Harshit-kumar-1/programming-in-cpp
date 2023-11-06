#include <stdio.h>

//#define FUN(i, j)  i##j

//int main(){
//	int v1=10;
//	int v2= 20;
//	printf("%d",  FUN(v,  1) );
//	return 0;
//}

#define MIN( x, y) (x<y)? x:y;
int main(){
int x=13, y=14, z;
z=MIN(x+y/2, y-4);
if(z>0){
	printf("%d", z);
}
return 0;
}
