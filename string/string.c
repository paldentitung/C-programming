#include<stdio.h>
#include<string.h>

int main (){
	//strcpy we cannot assign string to a char like char a="hello";
	char n1[20],n2[20];
	printf("enter a string:\n");
	gets(n1);
	strcpy(n2,n1);
	printf("copyed string is = %s:\n",n2);
	//strlwr this function covert the uppercase to lower case
	char n[30];
	printf("enter a string in upper case:\n");
	gets(n);
	printf("upper case string is = %s\n",n);
	strlwr(n);
	printf("lower case string is = %s\n",n);
	//strupr()  this function covert the lowercase  to uppercase
	char n10[100];
	printf("enter a string:\n");
	gets(n10);
	strupr(n10);
	printf("uppercase string =%s\n",n10);
	//strrev() this funtion recerse the characters in a string
	char name[100];
	printf("enter a name or string:\n");
	gets(name);
	strrev(name);
	printf("reverse string is =%s",name);
	return 0;
}
