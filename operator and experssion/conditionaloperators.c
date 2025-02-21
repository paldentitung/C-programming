#include<stdio.h>

int main (){
	//conditional or ternary operators
	int a,b,c;
	printf("enter the number:\n");
	scanf("%d%d",&a,&b);
	c=(a>b) ? a:b;
	printf("c=%d",c);
		return 0;
}
