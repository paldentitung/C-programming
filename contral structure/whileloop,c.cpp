#include<stdio.h>

int main(){
	/*
	while (condition){
		code ... or work ....
		iteration;
	}here this is while loop syntax in which it run until the condtion doenot decome false 
	*/
	//exapmle
	int i,age,name;
	printf("enter your age:\n");
	scanf("%d",&age);
	while (age>17){
		printf("your age over 18 so :\n");
		printf("enter your name:\n");
		scanf("%d",&name);
	
		i++;
	}
}
