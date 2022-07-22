/*
	Write a program of structure for five employee that provides the following information 
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
	struct employee s1[5];
	
	for(int i=0;i<5;i++)
	{
		printf("Enter Employee No : ");
		scanf("%d",&s1[i].no);
		
		fflush(stdin);
		
		printf("Enter Employee Name : ");
		scanf("%s",&s1[i].name);
		
		printf("Enter Employee Address : ");
		scanf("%s",&s1[i].address);
		
		printf("Enter Employee Age : ");
		scanf("%d",&s1[i].age);
		
		printf("\n\n----------Display----------\n\n");
		
		printf("Your No : %d",s1[i].no);
		printf("\nYour Name : %s",s1[i].name);
		printf("\nYour Address : %s",s1[i].address);
		printf("\nYour Age : %d",s1[i].age);
		
		printf("\n\n");
	}
}
