#include<stdio.h>
#include<string.h>
//function with parameters and argumentswith return values 

int sum(int a,int b){
	return a+b;
	//or make a variable sum =a+b and then return sum
	
}
int checklength(char a[]){
	int len;
	len=strlen(a);
	return len;
}
int stringprint(char s[]){
	int len;
	len=strlen(s);
	int i;
 	for(i=0;i<len;i++){
		printf("%c\t",s[i]);
	}
	printf("\n");
	return 0;
}

int  stringprintpattern(char s[]){
	int len;
	len=strlen(s);
	int i,j;
	for(i=1;i<=len;i++){
		for(j=0;j<i;j++){
			printf("%c\t",s[j]);
		}
		printf("\n");
	}
	return 0;
}
int main(){
int p,k;
	printf("\nenter two numbers:\n");
	scanf("%d%d",&p,&k);
	int result=sum(p,k);
	printf("result = %d",result);
	
	char a[100];
	printf("\nenter a string to check lenght:\n");
	scanf("%s",a);
	int r=checklength(a);
	printf("lenth = %d",r);
	
	char s[100];
	printf("\nenter a string to print each charcters:\n");
	scanf("%s",s);
	stringprint(s);
	
	char string[100];
	printf("\nenter a string to print each charcters:\n");
	scanf("%s",string);
	stringprintpattern(string);
	
	
	return 0;
}
