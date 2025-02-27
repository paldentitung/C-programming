#include<stdio.h>

void add(){
	int a=10,b=10,sum=0;
	sum=a+b;
	printf("sum = %d",sum);
}

int main (){
	//function is a resuable block of code which is user defined
	add();//calling a function we can called that function anywhere is program as per as used
	return 0;
}
