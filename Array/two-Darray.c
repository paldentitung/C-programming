#include<stdio.h>

int main (){
	int i,j,a[2][2];
	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			printf("enter the number of matrix 2X2:\n");
			scanf("%d",&a[i][j]);
		}
	}
	printf("\n the 2X2 matrix is:\n\n");
	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
	
			printf("\t%d\t",a[i][j]);
		}
		printf("\n");
	}
 	return 0;
}
