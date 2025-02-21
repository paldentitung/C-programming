#include<Stdio.h>

int main (){
	int age=19;
	//if statement 
	if(age==18){
		printf("your can drive ");
	}
	//if else statement
	if(age>18){
		printf("your age is over 18");
	}else {
		printf("you age is under 18");
	}
	//if else if  statement 
	if(age==18){
		printf("you can drive");
	}else if(age>18){
		printf("you are over 18 year");
	}else{
		printf("you are under 18 year");
	}
	return 0;
}
