#include<stdio.h>
#include<string.h>
int main  (){
	// eg of strlen which check the length of string
	char n[20];
	printf("enter the name:\n");
	gets(n);
	int len;
	len=strlen(n);
	printf("length = %d",len);
	//eg of strcat which add two string 
	char n1[20],n2[20];
	printf("\nenter the first string:\n");
	gets(n1);
	printf("enter the second string:\n");
	gets(n2);
	strcat(n1,n2);
	printf("\nconcatenated string = %s",n1);
	//strcmp used to check the condition like string1==string2 and strcmp() return zero if 2 string is equal and vice-versa
	char  n3[20],n4[20];
	int c;
	printf("\nenter the first string:\n");
	gets(n3);
	printf("enter the second string:\n");
	gets(n4);
	c=strcmp(n3,n4);
	if(c == 0)
	printf("\nstring 1 and string 2 are equal");
	else
	printf("\nstring 1 and string 2 are not equal");
	return 0;
}
