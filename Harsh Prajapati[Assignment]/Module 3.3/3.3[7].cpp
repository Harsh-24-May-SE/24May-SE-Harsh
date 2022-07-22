//Find Out Length Of String With Space

#include<stdio.h>
main()
{
	char name[30];
	int length=0,i;
	
	printf("Enter Name : ");
	gets(name);
	
	for(i=0;name[i]!='\0';i++)
	{
		length++;
	}
	printf("\nLength of String Is :%d",length);
}
