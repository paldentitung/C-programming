#include<stdio.h>

int main (){
	//conditional or ternary operators
	int a,b,c;
	printf("enter the number:\n");
	scanf("%d%d",&a,&b);
	if(a==b){
		printf("enter different numbers");
	}else {
		c=(a>b) ? a:b;
	printf(" bigger number between then is =%d",c);
	}
	
		return 0;
}
