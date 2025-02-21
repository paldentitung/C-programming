#include<stdio.h>

int main(){
	int days;
	printf("enter the number between 1 to 7");
	scanf("%d",&days);
	switch(days){
		case 1:
			printf("day is sunday");
			break;
		case 2:
			printf("day is monday");
			break;
		case 3:
			printf("day is tuseday");
			break;
		case 4:
			printf("day is wednesday");
			break;
		case 5:
			printf("day si thursday");
			break;
		case 6:
			printf("day is friday");
			break;
		case 7:
			printf("day is saturaday");
			break;
		default:
			printf("enter the number bweteen 1 to 7 only");
	}
	return 0;
}
