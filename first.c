/*#include<stdio.h>

int main (){
	int a[10];
	printf("enter  ten  numbers\n");
	for(int i=0 ; i<a[10]: i++){
		scanf("%d",&a[i]);	
		
	printf("array is %d",a[i]);
	}

	return 0;
}*/
#include <stdio.h>

int main() {
  /*  int a[10],i;

    printf("Enter ten numbers:\n");
    
    // Loop to take input
    for (i = 0; i < 10; i++) {
        scanf("%d", &a[i]);
    }

    printf("Array elements are:\n");

    // Loop to print array elements
    for (i = 0; i < 10; i++) {
        printf("a[%d] = %d\n", i, a[i]);
    }*/
    
    int a[2][2],i,j;
    printf("enter the 2X2\n");
    for(i=0;i<2;i++){
    	for(j=0;j<2;j++){
    		scanf("%d",&a[i][j]);
		}
	}
	printf("\n\n output\n\n");
	   for(i=0;i<2;i++){
	   	printf("|"); 
    	for(j=0;j<2;j++){
    		printf("\t%d\t",a[i][j]);
		}
		printf("|\n\n");
	}
    return 0;
}

