#include<stdio.h>
//function with parameters but no return value
void sum(int a,int b){//we have create two variable int a,int b
	
	int sum=a+b;
	printf("sum = %d",sum);
}
int main (){
	sum(100,10);//we are passing argument interger numbers
	//we can take input two number from user 
	int p,k;
	printf("\nenter two numbers:\n");
	scanf("%d%d",&p,&k);
	sum(p,k);
	return 0;
}
