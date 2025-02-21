#include<Stdio.h>

int main (){
	int row;
	printf("enter the rows:\n");
	scanf("%d",&row);
	int i,j;
	for(i=0;i<row;i++){
		for(j=0;j<i;j++){
				printf("*");
		}
		printf("\n");
	}
	return 0;
}
