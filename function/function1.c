#include<stdio.h>

void sum(){//we create a function without parameters i.e sum(a,b)
	int a,b,sum=0;
	printf("enter two numbers:\n");
	scanf("%d%d",&a,&b);
	sum=a+b;
	printf("sum of two numbers is = %d",sum);
}

int main (){
	//function without no arguments and no paramerters
	sum();//we are not passing any value in ()
	return 0;
}
