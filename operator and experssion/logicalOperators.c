#include<stdio.h>

int main (){
	//logical operators
	// && which give true when both conditon is true
	int a,b,c;
	printf("enter the three number:\n");
	scanf("%d%d%d",&a,&b,&c);
	if(a>b && a>c){
		printf(" a is greatest among them");
	}else if(b>c && b>a){
			printf("b is greatest among them");
	}else {
			printf("c is greatest among them");
	}
	// || OR operators  which give true when one conditon is true 
    int num;
    
    printf("\nEnter a number: ");
    scanf("%d", &num);

    if (num == 5 || num == 10) {
        printf("You entered either 5 or 10.\n");
    } else {
        printf("You entered a number other than 5 or 10.\n");
    }
	return 0;
}
