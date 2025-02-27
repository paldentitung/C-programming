#include<stdio.h>
//pointers is a special variable which store address rather than values and we have to make pointer and varible to point have to be same datatypes
//exapmle
int main (){
	int a = 10;
	int *ptr;//here is a pointer variable is the example of pointers
	ptr=&a;// we are assign the address of a in ptr
	printf("value of a original = %d\n",a);
	printf("address  of a original  = %u\n",&a);
	printf("address of a after assign to p= %d\n",ptr);
	printf("value of a after assign to p= %d\n",*ptr);//to print the value of a pointers we use " * "
	return 0;
}
