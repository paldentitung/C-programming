#include<stdio.h>
//pattern
 /*
 	 1
 	 1 1
 	 1 1 1 
 	 1 1 1 1 
 	 1 1 1 1 1 
  */
int main (){
	int i,j;
	for(i=1;i<=5;i++){
		for(j=1;j<=i;j++){
			printf("1\t");
		}
		printf("\n");
	}
	return 0;
}
