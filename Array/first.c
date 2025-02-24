#include<stdio.h>

int main (){
	int a[10];//here is a variable which is array of 10 that can store 10 interger value like a[0],a[1] to a[9]
	int i;
	for(i=0;i<10;i++){
		printf("enter ten numbers:\n");
		scanf("%d",&a[i]);

	}
	for(i=0;i<10;i++){
	
		printf("entered numbers are =%d\n",a[i]);
	}
	return 0;
}
