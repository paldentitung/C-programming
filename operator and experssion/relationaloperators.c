#include<stdio.h>

int main (){
	//relation operators
	int a,b;
	printf("enter the two numbers:\n");
	scanf("%d %d",&a,&b);
	if(a>b){
		printf("a is bigger than b");
	}else if(a==b){
		printf("a and b is equal ");
	}else {
		printf("b is bigger than a");
	}
	int age;
	printf("\nenter your age:\n");
	scanf("%d",&age);
	if(age==18){
		printf("you can drive next year");
	}else if(age<18){
		printf("you cannot drive");
	}else {
		printf("your age are over 18   you can drive");
	}
	return 0;
}
