#include<stdio.h>

int main (){
	
	//unary operators
	int i=10;
	printf("original value of i is =%d\n",i);
	printf("prefix =%d",++i);// prefix increase the value 
		printf("\nvalue of i after increment =%d",i);
	printf("\npostfix =%d",i++);//here the value will not change after this i  value change
	printf("\nvalue of i after increment =%d",i);
	printf("\n prefix =%d",--i);//here the value of i change before 
			printf("\nvalue of i after decrement =%d",i);
	printf("\n postfix =%d",i--);//here the value of i change after the  i decreament 
		printf("\nvalue of i after decrement =%d",i);
	return 0;
}
