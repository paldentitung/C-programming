#include<stdio.h>
//sum of two numbers using pointers
int main (){
	int a,b,*p,*k,sum=0;
	printf("enter two numbers:\n");
	scanf("%d%d",&a,&b);
	//assign pointers the address
	p=&a;
	k=&b;
	sum= *p + *k; 
	printf("sum of two = %d",sum);
	
	return 0;
}
