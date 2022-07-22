/*
	Write a program of structure employee that provides the following information 
	-print and display empno, empname, address and age
*/
#include<stdio.h>

struct employee
{
	int no,age;
	char name[20],address[50];
};
main()
{
	struct employee s1;
	
	printf("Enter Employee No : ");
	scanf("%d",&s1.no);
	
	fflush(stdin);
	
	printf("Enter Employee Name : ");
	scanf("%s",&s1.name);
	
	printf("Enter Employee Address : ");
	scanf("%s",&s1.address);
	
	printf("Enter Employee Age : ");
	scanf("%d",&s1.age);
	
	printf("\n\n----------Display----------\n\n");
	
	printf("Your No : %d",s1.no);
	printf("\nYour Name : %s",s1.name);
	printf("\nYour Address : %s",s1.address);
	printf("\nYour Age : %d",s1.age);
}
