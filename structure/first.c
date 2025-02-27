#include<stdio.h>

struct student{
	int SN;
	char name[100];
	float marks;
}std;

int main(){
	printf("enter SN:\n");
	scanf("%d",&std.SN);
	printf("enter name of the student:\n");
	scanf("%s",&std.name);
	printf("enter marks:\n");
	scanf("%f",&std.marks);
	printf("----------------\n");
	printf("[ SN| Name| marks| = |%d| %s| %f|  ]",std.SN,std.name,std.marks);
/*
	printf("SN = %d",std.SN);
	printf("name = %s",std.name);
	printf("marks = %f",std.marks);
	*/
	
	return 0;
}
