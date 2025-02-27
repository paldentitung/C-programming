#include<stdio.h>

struct student {
	char name[100];
	int roll;
	float marks;
}s[6];

int main (){
	int i,count=0,fail=0;
	printf("enter the name roll and marks:\n");
	for(i=0;i<6;i++){
		scanf("%s%d%f",s[i].name,&s[i].roll,&s[i].marks);
	}

	for(i=0;i<6;i++){
		printf("\n-------student %d --------:\n\n",i);
		printf("|%s\t%d\t%f|\n",s[i].name,s[i].roll,s[i].marks);
		if(s[i].marks>90){
			count++;
		}
		if(s[i].marks<30){
			fail++;
		}
	}
				printf("number of student get A+ = %d",count);
				printf("number of student fail = %d ",fail);	
	return 0;
}
