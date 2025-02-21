#include<stdio.h>

int main (){
	int a,b,sum,subtract,multiply,division,mobule;
	printf("enter the two numbers:\n");
	scanf("%d %d",&a,&b);
	sum=a+b;
	printf("sum = %d\n",sum);
	//subtract
	subtract=a-b;
	printf("subtract = %d\n",subtract);
	//multiply
	multiply=a*b;
	printf("multiply = %d\n",multiply);
	//division
	division=a/b;
	printf("division = %d\n",division);
	mobule=a%b;
	printf("module = %d",mobule);
	return 0;
}
