#include<stdio.h>

int main (){
	//Assignment operators
	// swap the value
	int a=10,b=20,c;
	printf("original value  of a=%d\n",a);
	printf("original value  of b=%d\n",b);
	c=a;//here we assign the value of a in c
	a=b;//here we assign the value of b in a
	b=c;//here we assign the value of c in b
	printf("swap value  of a=%d\n",a);
	printf("swap value  of b=%d\n",b);
	
	return 0;
}
