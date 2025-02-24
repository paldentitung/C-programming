#include<Stdio.h>

struct std{
	char name[20];
	int roll;
	float marks;
}s[2];
int main (){
	int i;
	for(i=0;i<2;i++){
		printf("enter student info:\n\n");
		scanf("%s%d%f",s[i].name,&s[i].roll,&s[i].marks);
	}
		for(i=0;i<2;i++){
		
		printf("\nname = %s\t roll no =%d\t marks = %f\n ",s[i].name,s[i].roll,s[i].marks);
	}
	return 0;
}
	
